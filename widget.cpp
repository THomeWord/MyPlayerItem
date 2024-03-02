#include "widget.h"
#include "ui_widget.h"

#include <QDesktopServices>

//播放视频的全局变量
QVBoxLayout* layout_video;//布局

//是否重新载入视频
bool if_reload=false;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->dockWidget->setVisible(false);//不可见播放列表
    ui->horizontalSlider_sound->setVisible(false);//不可见音量

    myplayer =new QMediaPlayer;
    myplayerlist =new QMediaPlaylist;
    mywidget =new QVideoWidget(ui->label_player);
    myplayer->setPlaylist(myplayerlist);
    myplayer->setVideoOutput(mywidget);
    mywidget->resize(ui->label_player->size());

    isOpen=false;

    connect(myplayer,&QMediaPlayer::positionChanged,ui->horizontalSlider_item,
            &QSlider::setValue);
    connect(myplayer,&QMediaPlayer::durationChanged,ui->horizontalSlider_item,
            [&](qint64 temp){
        ui->horizontalSlider_item->setRange(0,(int)temp);
    });
    //滑动条控制进度
    connect(ui->horizontalSlider_item,&QSlider::sliderMoved,
            myplayer,&QMediaPlayer::setPosition);


    //---------------获取媒体时长T
    connect(myplayer,&QMediaPlayer::durationChanged,ui->label_timeend,
            [&](qint64 duration)
    {
        ui->horizontalSlider_item->setRange(0,duration);
        ui->label_timeend->setText(QString("%1:%2:%3").
                                   arg(duration/1000/60/60,2,10,QChar('0')).
                                   arg(duration/1000/60,2,10,QChar('0')).
                                   arg(duration/1000%60,2,10,QChar('0')));
    });
    //---------------获取当前播放时长
    connect(myplayer,&QMediaPlayer::positionChanged,ui->label_timestart,
            [&](qint64 position)
    {
        ui->horizontalSlider_item->setValue(position);
        ui->label_timestart->setText(QString("%1:%2:%3").
                                     arg(position/1000/60/60,2,10,QChar('0')).
                                     arg(position/1000/60,2,10,QChar('0')).
                                     arg(position/1000%60,2,10,QChar('0')));
    });
}

Widget::~Widget()
{
    delete ui;
}

//============打开文件====================
void Widget::on_pushButton_open_clicked()
{
    //选择视频文件
    QString cPath=QDir::homePath();
    QString filename = QFileDialog::getOpenFileName(this,tr("选择视频文件"),cPath,tr("视频格式(*.avi *.mp4 *.flv *.mkv)"));
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(NULL, "错误", "你未选择任何文件", QMessageBox::Ok, QMessageBox::Ok);
        return;
    }
    myplayer->setMedia(QUrl::fromLocalFile(filename));
    //==========界面布局自适应=============
    if(if_reload)
    {//重新加载视频时，重置以下变量
        delete layout_video;
    }
    if_reload = true;

    //实例化三个全局变量
    layout_video = new QVBoxLayout;
    //设置视频播放区域与Label的边距
    layout_video->setMargin(1);
    //根据label_player尺寸设置播放区域
    mywidget->resize(ui->label_player->size());
    layout_video->addWidget(mywidget);
    ui->label_player->setLayout(layout_video);
    myplayer->setVideoOutput(mywidget);
    //==========界面布局自适应=============
    myplayer->play();
    QFileInfo fileinfo(filename);
    ui->label->setText("正在播放:"+fileinfo.fileName());
    ui->label_path->setText("文件路径"+fileinfo.filePath());
    a=1;
}

void Widget::on_pushButton_clicked()
{
    //----判断是否隐藏播放列表
    if(ui->dockWidget->isVisible()){
        ui->dockWidget->setVisible(false);
        ui->pushButton->setText("打开播放列表");
    }else{
        ui->dockWidget->setVisible(true);
        ui->pushButton->setText("关闭播放列表");
    }
}
//===================添加文件夹中的视频文件======================
void Widget::on_pushButton_add_clicked()
{
    a=2;
    //选择视频文件当选择路径为空:报错
    QString cPath=QDir::homePath();
    QString fileName = QFileDialog::getExistingDirectory(NULL,"请选择影音文件目录",".",NULL);
    QDir dir(fileName);
    QStringList nameFilters;
    nameFilters <<  "*.avi" << "*.wmv"  <<  "*.mp4" ;
    QStringList files =dir.entryList(nameFilters,QDir::Files|QDir::Readable,QDir::Name);
    if(fileName==NULL){//防止未选择文件夹时,因为选择添加播放列表addItems(files)、路径m_playerPath为空而报错
        return;
    }

    if(A!=fileName){//去除重复添加相同路径的视频文件夹
        myplayer->stop();
        A=fileName;
        ui->listWidget->addItems(files);
        m_playerPath = fileName;
    }

    //==========界面布局自适应=============
    if(if_reload)
    {//重新加载视频时，重置以下变量
        delete layout_video;
    }
    if_reload = true;
    //实例化三个全局变量
    layout_video = new QVBoxLayout;
    //设置视频播放区域与Label的边距
    layout_video->setMargin(1);
    //根据label_player尺寸设置播放区域
    mywidget->resize(ui->label_player->size());
    layout_video->addWidget(mywidget);
    ui->label_player->setLayout(layout_video);
    myplayer->setVideoOutput(mywidget);
    //==========界面布局自适应=============

    ui->dockWidget->setVisible(true);
    ui->pushButton->setText("关闭播放列表");
}

//================音量==============
void Widget::on_pushButton_sound_clicked()
{
    if(ui->horizontalSlider_sound->isVisible())
    {
        ui->horizontalSlider_sound->setVisible(false);
    }
    else
    {
        ui->horizontalSlider_sound->setVisible(true);
    }
}
void Widget::on_horizontalSlider_sound_valueChanged(int value)
{
    myplayer->setVolume(value);
    if(ui->horizontalSlider_sound->value()<40){
        ui->pushButton_sound->setIcon(QIcon(":/24gf-volumeLow.png"));
    }
    if(ui->horizontalSlider_sound->value()>70){
        ui->pushButton_sound->setIcon(QIcon(":/24gf-volumeHigh.png"));
    }
    if(ui->horizontalSlider_sound->value()>40&&ui->horizontalSlider_sound->value()<70){
        ui->pushButton_sound->setIcon(QIcon(":/24gf-volumeMiddle.png"));
    }
    if(ui->horizontalSlider_sound->value()==0){
        ui->pushButton_sound->setIcon(QIcon(":/24gf-volumeDisable.png"));
    }
}
void Widget::on_horizontalSlider_sound_sliderReleased()
{
    ui->horizontalSlider_sound->setVisible(false);
}
//================音量==============


//====================控制开始、暂停、停止==========================
void Widget::on_pushButton_start_clicked()
{
    if(a==0){
        QMessageBox::information(NULL, "错误:您选择的播放列表为空","请选择播放文件或选择视频播放文件夹后重试",
                                 QMessageBox::Ok, QMessageBox::Ok);
        return;
    }
    if(a==1){
        myplayer->play();
        mywidget->resize(ui->label_player->size());
    }
    if(a==2){
        m_PlayRow=0;
        QListWidgetItem *item = ui->listWidget->item(m_PlayRow);
        item->setSelected(true);
        myplayer->stop();
        myplayer->setMedia(QUrl::fromLocalFile(m_playerPath+"/"+item->text()));
        ui->label->setText("正在播放:"+item->text());
        ui->label_path->setText("文件路径:"+m_playerPath+"/"+item->text());
        myplayer->play();
        mywidget->resize(ui->label_player->size());
    }
}
void Widget::on_pushButton_pause_clicked()
{
    myplayer->pause();
}
void Widget::on_pushButton_stop_clicked()
{
    myplayer->stop();
}
//====================控制开始、暂停、停止==========================


//==================上一个====================================
void Widget::on_pushButton_last_clicked()
{
    if(m_playerPath ==NULL){
        QMessageBox::information(NULL, "错误:您选择的播放列表为空", "请选择播放文件或选择视频播放文件夹后重试",
                                 QMessageBox::Ok, QMessageBox::Ok);
        return;
    }
    if(m_PlayRow==-1){
        m_PlayRow = ui->listWidget->count();
    }
    if(m_PlayRow == 0){
        m_PlayRow = ui->listWidget->count() - 1;
    }
    else{
        m_PlayRow--;
    }
    a=1;
    QListWidgetItem *item = ui->listWidget->item(m_PlayRow);
    item->setSelected(true);
    myplayer->stop();
    myplayer->setMedia(QUrl::fromLocalFile(m_playerPath+"/"+item->text()));
    ui->label->setText("正在播放:"+item->text());
    ui->label_path->setText("文件路径:"+m_playerPath+"/"+item->text());
    myplayer->play();
}
//==================上一个====================================


//==================下一个====================================
void Widget::on_pushButton_next_clicked()
{
    if(m_playerPath ==NULL){
        QMessageBox::information(NULL, "错误:您选择的播放列表为空",
                                 "请选择播放文件或选择视频播放文件夹后重试", QMessageBox::Ok, QMessageBox::Ok);
        return;
    }
    if(m_PlayRow + 1 == ui->listWidget->count()){
        m_PlayRow = 0;
    }
    else{
        m_PlayRow++;
    }
    a=1;
    QListWidgetItem *item = ui->listWidget->item(m_PlayRow);
    item->setSelected(true);
    myplayer->stop();
    myplayer->setMedia(QUrl::fromLocalFile(m_playerPath+"/"+item->text()));
    ui->label->setText("正在播放:"+item->text());
    ui->label_path->setText("文件路径:"+m_playerPath+"/"+item->text());
    myplayer->play();
}
//==================下一个====================================



void Widget::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e)
    if(isOpen){
        mywidget->resize(ui->label_player->size());
    }
}


//==================关闭窗口提醒====================================
void Widget::closeEvent(QCloseEvent *event)
{
    int ret=QMessageBox::question(this,"提问","您是否要关闭窗口？");
    if(ret==QMessageBox::Yes){
        event->accept();
    }
    else {
        event->ignore();
    }
}
//==================关闭窗口提醒====================================


//============播放列表双击===========
void Widget::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    a=1;
    mywidget->resize(ui->label_player->size());
    m_PlayRow=ui->listWidget->row(item);
    myplayer->stop();
    myplayer->setMedia(QUrl::fromLocalFile(m_playerPath+"/"+item->text()));
    ui->label->setText("正在播放:"+item->text());
    ui->label_path->setText("文件路径:"+m_playerPath+"/"+item->text());
    myplayer->play();
}
//============播放列表双击===========


void Widget::on_pushButton_about_clicked()//===关于===
{
    QMessageBox::information(NULL, "About the item","学号:201603010227\n姓名:李\t明\t华\n制作时常:两  周  半",
                             QMessageBox::Ok, QMessageBox::Ok);
}

void Widget::on_pushButton_Book_clicked()
{
    QString filePath = "qrc:/MyPLayer.pdf";
    QDesktopServices::openUrl(QUrl::fromLocalFile(filePath));
}
