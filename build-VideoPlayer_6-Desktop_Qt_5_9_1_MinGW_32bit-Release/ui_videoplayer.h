/********************************************************************************
** Form generated from reading UI file 'videoplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPLAYER_H
#define UI_VIDEOPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src\videoplayer\widget\videoslider.h"

QT_BEGIN_NAMESPACE

class Ui_VideoPlayer
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_container;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_showopen;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_open;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_video;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_show_video;
    QWidget *widget_right;
    QVBoxLayout *verticalLayout_6;
    QListWidget *listWidget;
    QWidget *widget_controller;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    VideoSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout;
    QLabel *label_currenttime;
    QLabel *label_2;
    QLabel *label_totaltime;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_open;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_play;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_stop;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *VideoPlayer)
    {
        if (VideoPlayer->objectName().isEmpty())
            VideoPlayer->setObjectName(QStringLiteral("VideoPlayer"));
        VideoPlayer->resize(1060, 695);
        verticalLayout = new QVBoxLayout(VideoPlayer);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_container = new QWidget(VideoPlayer);
        widget_container->setObjectName(QStringLiteral("widget_container"));
        widget_container->setStyleSheet(QString::fromUtf8("QWidget#widget_container\n"
"{\n"
"	background-color: rgb(22, 22, 22);\n"
"	border:1px solid rgba(0, 0, 0, 30);\n"
"	border-radius:2px;  /*\350\276\271\346\241\206\346\213\220\350\247\222*/\n"
"}\n"
""));
        verticalLayout_3 = new QVBoxLayout(widget_container);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, 0, -1);
        widget_showopen = new QWidget(widget_container);
        widget_showopen->setObjectName(QStringLiteral("widget_showopen"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_showopen->sizePolicy().hasHeightForWidth());
        widget_showopen->setSizePolicy(sizePolicy);
        widget_showopen->setStyleSheet(QLatin1String("QWidget#widget_showopen\n"
"{\n"
"	\n"
"	background-color: rgba(60, 65, 68,100);\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(widget_showopen);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        toolButton_open = new QToolButton(widget_showopen);
        toolButton_open->setObjectName(QStringLiteral("toolButton_open"));
        toolButton_open->setMinimumSize(QSize(160, 50));

        horizontalLayout_3->addWidget(toolButton_open);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_4->addWidget(widget_showopen);

        widget_video = new QWidget(widget_container);
        widget_video->setObjectName(QStringLiteral("widget_video"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_video->sizePolicy().hasHeightForWidth());
        widget_video->setSizePolicy(sizePolicy1);
        widget_video->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(widget_video);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_show_video = new QVBoxLayout();
        verticalLayout_show_video->setObjectName(QStringLiteral("verticalLayout_show_video"));

        verticalLayout_2->addLayout(verticalLayout_show_video);


        verticalLayout_4->addWidget(widget_video);


        horizontalLayout_6->addLayout(verticalLayout_4);

        widget_right = new QWidget(widget_container);
        widget_right->setObjectName(QStringLiteral("widget_right"));
        widget_right->setMinimumSize(QSize(200, 0));
        widget_right->setMaximumSize(QSize(200, 16777215));
        widget_right->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 255);"));
        verticalLayout_6 = new QVBoxLayout(widget_right);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        listWidget = new QListWidget(widget_right);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout_6->addWidget(listWidget);


        horizontalLayout_6->addWidget(widget_right);


        verticalLayout_3->addLayout(horizontalLayout_6);

        widget_controller = new QWidget(widget_container);
        widget_controller->setObjectName(QStringLiteral("widget_controller"));
        widget_controller->setMinimumSize(QSize(0, 60));
        widget_controller->setStyleSheet(QLatin1String("QWidget#widget_controller\n"
"{\n"
"	background-color: rgba(60, 65, 68,100);\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(widget_controller);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSlider = new VideoSlider(widget_controller);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_currenttime = new QLabel(widget_controller);
        label_currenttime->setObjectName(QStringLiteral("label_currenttime"));
        label_currenttime->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-radius:0px;\n"
"	color: #F0F0F0;\n"
"	background-color:rgba(0,0,0,0);\n"
"	border-style:none;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"font-size:20px;\n"
"font-weight:bold;\n"
"}\n"
""));

        horizontalLayout->addWidget(label_currenttime);

        label_2 = new QLabel(widget_controller);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-radius:0px;\n"
"	color: #F0F0F0;\n"
"	background-color:rgba(0,0,0,0);\n"
"	border-style:none;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"font-size:20px;\n"
"font-weight:bold;\n"
"}\n"
""));

        horizontalLayout->addWidget(label_2);

        label_totaltime = new QLabel(widget_controller);
        label_totaltime->setObjectName(QStringLiteral("label_totaltime"));
        label_totaltime->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-radius:0px;\n"
"	color: #F0F0F0;\n"
"	background-color:rgba(0,0,0,0);\n"
"	border-style:none;\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"font-size:20px;\n"
"font-weight:bold;\n"
"}\n"
""));

        horizontalLayout->addWidget(label_totaltime);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_open = new QPushButton(widget_controller);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        pushButton_open->setMinimumSize(QSize(36, 36));
        pushButton_open->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_open->setStyleSheet(QLatin1String("QPushButton{ \n"
"image: url(:image/open_normal.png);\n"
"border-radius:0px; \n"
"} \n"
"QPushButton:hover{ \n"
"image: url(:image/open_focus.png);\n"
"border-radius:0px; \n"
"} \n"
"QPushButton:pressed{ \n"
"image: url(:image/open_normal.png);\n"
"border-radius:0px; \n"
"}\n"
""));

        horizontalLayout_4->addWidget(pushButton_open);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        pushButton_play = new QPushButton(widget_controller);
        pushButton_play->setObjectName(QStringLiteral("pushButton_play"));
        pushButton_play->setMinimumSize(QSize(50, 50));
        pushButton_play->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_play->setStyleSheet(QLatin1String("QPushButton{ \n"
"image: url(:image/start_normal.png);\n"
"border-radius:0px; \n"
"}  \n"
"QPushButton:hover{ \n"
"image: url(:image/start_focus.png);\n"
"border-radius:0px; \n"
"} \n"
"QPushButton:pressed{ \n"
"image: url(:image/start_normal.png);\n"
"border-radius:0px; \n"
"}\n"
""));

        horizontalLayout_4->addWidget(pushButton_play);

        pushButton_pause = new QPushButton(widget_controller);
        pushButton_pause->setObjectName(QStringLiteral("pushButton_pause"));
        pushButton_pause->setMinimumSize(QSize(50, 50));
        pushButton_pause->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_pause->setStyleSheet(QLatin1String("QPushButton{ \n"
"image: url(:image/pause_normal.png);\n"
"border-radius:0px; \n"
"} \n"
"QPushButton:hover{ \n"
"image: url(:image/pause_focus.png);\n"
"border-radius:0px; \n"
"} \n"
"QPushButton:pressed{ \n"
"image: url(:image/pause_normal.png);\n"
"border-radius:0px; \n"
"}\n"
""));

        horizontalLayout_4->addWidget(pushButton_pause);

        pushButton_stop = new QPushButton(widget_controller);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));
        pushButton_stop->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(pushButton_stop);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(widget_controller);


        verticalLayout->addWidget(widget_container);


        retranslateUi(VideoPlayer);

        QMetaObject::connectSlotsByName(VideoPlayer);
    } // setupUi

    void retranslateUi(QWidget *VideoPlayer)
    {
        VideoPlayer->setWindowTitle(QApplication::translate("VideoPlayer", "Form", Q_NULLPTR));
        toolButton_open->setText(QApplication::translate("VideoPlayer", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("VideoPlayer", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("VideoPlayer", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("VideoPlayer", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("VideoPlayer", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_currenttime->setText(QApplication::translate("VideoPlayer", "00:00:00", Q_NULLPTR));
        label_2->setText(QApplication::translate("VideoPlayer", "/", Q_NULLPTR));
        label_totaltime->setText(QApplication::translate("VideoPlayer", "00:00:00", Q_NULLPTR));
        pushButton_open->setText(QString());
        pushButton_play->setText(QString());
        pushButton_pause->setText(QString());
        pushButton_stop->setText(QApplication::translate("VideoPlayer", "\345\201\234\346\255\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VideoPlayer: public Ui_VideoPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPLAYER_H
