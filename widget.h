#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtMultimedia>
#include <QVideoWidget>
#include <QMessageBox>
#include <QFileDialog>
#include <QTimer>
#include <QTime>
#include <QDir>
#include <QMediaPlaylist>
#include <QListWidgetItem>
#include <QMediaPlayer>
#include<QPaintEvent>
#include<QGraphicsSceneEvent>
#include<QUrl>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
protected:
    void paintEvent(QPaintEvent *e);

    void closeEvent(QCloseEvent *event);

private slots:
    void on_pushButton_open_clicked();

    void on_pushButton_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_sound_clicked();

    void on_horizontalSlider_sound_sliderReleased();

    void on_pushButton_start_clicked();

    void on_pushButton_pause_clicked();

    void on_pushButton_stop_clicked();

    void on_pushButton_last_clicked();

    void on_pushButton_next_clicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_horizontalSlider_sound_valueChanged(int value);

    void on_pushButton_about_clicked();

    void on_pushButton_Book_clicked();

private:
    Ui::Widget *ui;

    QString m_playerPath;//路径

    QMediaPlayer *myplayer=nullptr;//播放器
    QMediaPlaylist  *myplayerlist=nullptr;//播放列表
    QVideoWidget *mywidget;//视频显示

    bool isstart=false;
    bool isOpen;

    int m_PlayRow=-1;

    QTimer *timer;


    int a=0;

    QString A;
};
#endif // WIDGET_H
