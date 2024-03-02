/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_open;
    QPushButton *pushButton_add;
    QLabel *label;
    QLabel *label_path;
    QPushButton *pushButton_Book;
    QPushButton *pushButton_about;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_player;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_timestart;
    QSlider *horizontalSlider_item;
    QLabel *label_timeend;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_sound;
    QSlider *horizontalSlider_sound;
    QPushButton *pushButton_last;
    QPushButton *pushButton_start;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_next;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1200, 750);
        Widget->setMinimumSize(QSize(1200, 750));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/IKUN.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);"));
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_open = new QPushButton(Widget);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setBold(true);
        font.setWeight(75);
        pushButton_open->setFont(font);
        pushButton_open->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/24gl-folderOpen.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_open->setIcon(icon1);
        pushButton_open->setIconSize(QSize(30, 30));
        pushButton_open->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_open);

        pushButton_add = new QPushButton(Widget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setFont(font);
        pushButton_add->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/24gl-folderPlus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_add->setIcon(icon2);
        pushButton_add->setIconSize(QSize(30, 30));
        pushButton_add->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_add);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(200, 0));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(label);

        label_path = new QLabel(Widget);
        label_path->setObjectName(QString::fromUtf8("label_path"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_path->sizePolicy().hasHeightForWidth());
        label_path->setSizePolicy(sizePolicy1);
        label_path->setMinimumSize(QSize(400, 0));
        label_path->setFont(font);
        label_path->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(label_path);

        pushButton_Book = new QPushButton(Widget);
        pushButton_Book->setObjectName(QString::fromUtf8("pushButton_Book"));
        pushButton_Book->setFont(font);
        pushButton_Book->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/shiyongbangzhu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Book->setIcon(icon3);
        pushButton_Book->setIconSize(QSize(30, 30));
        pushButton_Book->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_Book);

        pushButton_about = new QPushButton(Widget);
        pushButton_about->setObjectName(QString::fromUtf8("pushButton_about"));
        pushButton_about->setFont(font);
        pushButton_about->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/guanyu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_about->setIcon(icon4);
        pushButton_about->setIconSize(QSize(30, 30));
        pushButton_about->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_about);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/24gf-playlist2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(30, 30));
        pushButton->setFlat(true);

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_player = new QLabel(Widget);
        label_player->setObjectName(QString::fromUtf8("label_player"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_player->sizePolicy().hasHeightForWidth());
        label_player->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        label_player->setFont(font1);
        label_player->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 20pt \"Consolas\";"));

        horizontalLayout_4->addWidget(label_player);

        dockWidget = new QDockWidget(Widget);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setMinimumSize(QSize(220, 131));
        dockWidget->setMaximumSize(QSize(220, 524287));
        dockWidget->setFont(font);
        dockWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 99, 99);"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(dockWidgetContents);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setFont(font);
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(90, 90, 90);"));

        verticalLayout->addWidget(listWidget);

        dockWidget->setWidget(dockWidgetContents);

        horizontalLayout_4->addWidget(dockWidget);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_timestart = new QLabel(Widget);
        label_timestart->setObjectName(QString::fromUtf8("label_timestart"));
        label_timestart->setFont(font);

        horizontalLayout->addWidget(label_timestart);

        horizontalSlider_item = new QSlider(Widget);
        horizontalSlider_item->setObjectName(QString::fromUtf8("horizontalSlider_item"));
        horizontalSlider_item->setBaseSize(QSize(0, 0));
        horizontalSlider_item->setFont(font);
        horizontalSlider_item->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{\n"
"	left:5px; right:5px;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"	image:url(:/QTIkun1.png);\n"
"	margin:-10px -10px -10px -10px;\n"
"}\n"
"QSlider::add-page:horizontal{\n"
"	background:#bcbcbc;\n"
"	border-radius:10px;\n"
"}\n"
"QSlider::sub-page:horizontal{\n"
"	background:#439cf3;\n"
"	border-radius:10px;\n"
"}"));
        horizontalSlider_item->setMinimum(0);
        horizontalSlider_item->setMaximum(100);
        horizontalSlider_item->setPageStep(1);
        horizontalSlider_item->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_item);

        label_timeend = new QLabel(Widget);
        label_timeend->setObjectName(QString::fromUtf8("label_timeend"));
        label_timeend->setFont(font);

        horizontalLayout->addWidget(label_timeend);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_sound = new QPushButton(Widget);
        pushButton_sound->setObjectName(QString::fromUtf8("pushButton_sound"));
        pushButton_sound->setFont(font);
        pushButton_sound->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/24gf-volumeLow.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sound->setIcon(icon6);
        pushButton_sound->setIconSize(QSize(30, 30));
        pushButton_sound->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_sound);

        horizontalSlider_sound = new QSlider(Widget);
        horizontalSlider_sound->setObjectName(QString::fromUtf8("horizontalSlider_sound"));
        horizontalSlider_sound->setMaximumSize(QSize(200, 16777215));
        horizontalSlider_sound->setFont(font);
        horizontalSlider_sound->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{\n"
"\n"
"	left:5px; right:5px;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"	image:url(:/QTIkun2.png);\n"
"	margin:-10px -10px -10px -10px;\n"
"}\n"
"QSlider::add-page:horizontal{\n"
"	background:#bcbcbc;\n"
"	border-radius:10px;\n"
"}\n"
"QSlider::sub-page:horizontal{\n"
"	background:#439cf3;\n"
"	border-radius:10px;\n"
"}"));
        horizontalSlider_sound->setMaximum(100);
        horizontalSlider_sound->setValue(35);
        horizontalSlider_sound->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_sound);

        pushButton_last = new QPushButton(Widget);
        pushButton_last->setObjectName(QString::fromUtf8("pushButton_last"));
        pushButton_last->setFont(font);
        pushButton_last->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/jiantou_shangyiye_o.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_last->setIcon(icon7);
        pushButton_last->setIconSize(QSize(30, 30));
        pushButton_last->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_last);

        pushButton_start = new QPushButton(Widget);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        pushButton_start->setFont(font);
        pushButton_start->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/kaishi.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_start->setIcon(icon8);
        pushButton_start->setIconSize(QSize(30, 30));
        pushButton_start->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_start);

        pushButton_pause = new QPushButton(Widget);
        pushButton_pause->setObjectName(QString::fromUtf8("pushButton_pause"));
        pushButton_pause->setFont(font);
        pushButton_pause->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/zanting_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_pause->setIcon(icon9);
        pushButton_pause->setIconSize(QSize(30, 30));
        pushButton_pause->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_pause);

        pushButton_stop = new QPushButton(Widget);
        pushButton_stop->setObjectName(QString::fromUtf8("pushButton_stop"));
        pushButton_stop->setFont(font);
        pushButton_stop->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_stop->setIcon(icon10);
        pushButton_stop->setIconSize(QSize(30, 30));
        pushButton_stop->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_stop);

        pushButton_next = new QPushButton(Widget);
        pushButton_next->setObjectName(QString::fromUtf8("pushButton_next"));
        pushButton_next->setFont(font);
        pushButton_next->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/jiantou_xiayiye_o.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_next->setIcon(icon11);
        pushButton_next->setIconSize(QSize(30, 30));
        pushButton_next->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_next);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\345\210\266\344\275\234\346\227\266\345\270\270\344\270\244\344\270\252\345\215\212\345\260\217\346\227\266\347\232\204\350\247\206\351\242\221\346\222\255\346\224\276\345\231\250", nullptr));
        pushButton_open->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        pushButton_add->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\345\210\260\346\222\255\346\224\276\345\210\227\350\241\250", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\255\243\345\234\250\346\222\255\346\224\276:", nullptr));
        label_path->setText(QCoreApplication::translate("Widget", "\346\222\255\346\224\276\350\267\257\345\276\204:", nullptr));
        pushButton_Book->setText(QCoreApplication::translate("Widget", "\344\275\277\347\224\250\350\257\264\346\230\216", nullptr));
        pushButton_about->setText(QCoreApplication::translate("Widget", "\345\205\263\344\272\216", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200/\345\205\263\351\227\255\346\222\255\346\224\276\345\210\227\350\241\250", nullptr));
        label_player->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\350\277\231\346\230\257\346\222\255\346\224\276\347\225\214\351\235\242</p></body></html>", nullptr));
        label_timestart->setText(QCoreApplication::translate("Widget", "00:00:00", nullptr));
        label_timeend->setText(QCoreApplication::translate("Widget", "00:00:00", nullptr));
        pushButton_sound->setText(QCoreApplication::translate("Widget", "\351\237\263\351\207\217", nullptr));
        pushButton_last->setText(QCoreApplication::translate("Widget", "\344\270\212\344\270\200\344\270\252", nullptr));
        pushButton_start->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        pushButton_pause->setText(QCoreApplication::translate("Widget", "\346\232\202\345\201\234", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        pushButton_next->setText(QCoreApplication::translate("Widget", "\344\270\213\344\270\200\344\270\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
