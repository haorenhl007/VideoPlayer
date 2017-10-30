/********************************************************************************
** Form generated from reading UI file 'videoplayer_showvideowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPLAYER_SHOWVIDEOWIDGET_H
#define UI_VIDEOPLAYER_SHOWVIDEOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoPlayer_ShowVideoWidget
{
public:

    void setupUi(QWidget *VideoPlayer_ShowVideoWidget)
    {
        if (VideoPlayer_ShowVideoWidget->objectName().isEmpty())
            VideoPlayer_ShowVideoWidget->setObjectName(QStringLiteral("VideoPlayer_ShowVideoWidget"));
        VideoPlayer_ShowVideoWidget->resize(400, 300);

        retranslateUi(VideoPlayer_ShowVideoWidget);

        QMetaObject::connectSlotsByName(VideoPlayer_ShowVideoWidget);
    } // setupUi

    void retranslateUi(QWidget *VideoPlayer_ShowVideoWidget)
    {
        VideoPlayer_ShowVideoWidget->setWindowTitle(QApplication::translate("VideoPlayer_ShowVideoWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VideoPlayer_ShowVideoWidget: public Ui_VideoPlayer_ShowVideoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPLAYER_SHOWVIDEOWIDGET_H
