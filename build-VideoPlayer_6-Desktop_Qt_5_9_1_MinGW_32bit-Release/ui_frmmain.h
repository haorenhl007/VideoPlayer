/********************************************************************************
** Form generated from reading UI file 'frmmain.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMAIN_H
#define UI_FRMMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmMain
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lab_Ico;
    QLabel *lab_Title;
    QWidget *widget_menu;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMenu;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Max;
    QPushButton *btnMenu_Close;
    QWidget *widget_main;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QComboBox *comboBox;
    QDateEdit *dateEdit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *treeWidget;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidget;
    QProgressBar *progressBar;
    QSlider *horizontalSlider;
    QScrollBar *horizontalScrollBar;

    void setupUi(QDialog *frmMain)
    {
        if (frmMain->objectName().isEmpty())
            frmMain->setObjectName(QStringLiteral("frmMain"));
        frmMain->resize(656, 527);
        frmMain->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(frmMain);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_title = new QWidget(frmMain);
        widget_title->setObjectName(QStringLiteral("widget_title"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy);
        widget_title->setMinimumSize(QSize(100, 33));
        horizontalLayout_2 = new QHBoxLayout(widget_title);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lab_Ico = new QLabel(widget_title);
        lab_Ico->setObjectName(QStringLiteral("lab_Ico"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_Ico->sizePolicy().hasHeightForWidth());
        lab_Ico->setSizePolicy(sizePolicy1);
        lab_Ico->setMinimumSize(QSize(30, 0));
        lab_Ico->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lab_Ico);

        lab_Title = new QLabel(widget_title);
        lab_Title->setObjectName(QStringLiteral("lab_Title"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lab_Title->sizePolicy().hasHeightForWidth());
        lab_Title->setSizePolicy(sizePolicy2);
        lab_Title->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lab_Title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lab_Title);

        widget_menu = new QWidget(widget_title);
        widget_menu->setObjectName(QStringLiteral("widget_menu"));
        sizePolicy1.setHeightForWidth(widget_menu->sizePolicy().hasHeightForWidth());
        widget_menu->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget_menu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnMenu = new QPushButton(widget_menu);
        btnMenu->setObjectName(QStringLiteral("btnMenu"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnMenu->sizePolicy().hasHeightForWidth());
        btnMenu->setSizePolicy(sizePolicy3);
        btnMenu->setMinimumSize(QSize(31, 0));
        btnMenu->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu->setFocusPolicy(Qt::NoFocus);
        btnMenu->setFlat(true);

        horizontalLayout->addWidget(btnMenu);

        btnMenu_Min = new QPushButton(widget_menu);
        btnMenu_Min->setObjectName(QStringLiteral("btnMenu_Min"));
        sizePolicy3.setHeightForWidth(btnMenu_Min->sizePolicy().hasHeightForWidth());
        btnMenu_Min->setSizePolicy(sizePolicy3);
        btnMenu_Min->setMinimumSize(QSize(31, 0));
        btnMenu_Min->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Min->setFocusPolicy(Qt::NoFocus);
        btnMenu_Min->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Min);

        btnMenu_Max = new QPushButton(widget_menu);
        btnMenu_Max->setObjectName(QStringLiteral("btnMenu_Max"));
        sizePolicy3.setHeightForWidth(btnMenu_Max->sizePolicy().hasHeightForWidth());
        btnMenu_Max->setSizePolicy(sizePolicy3);
        btnMenu_Max->setMinimumSize(QSize(31, 0));
        btnMenu_Max->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Max->setFocusPolicy(Qt::NoFocus);
        btnMenu_Max->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Max);

        btnMenu_Close = new QPushButton(widget_menu);
        btnMenu_Close->setObjectName(QStringLiteral("btnMenu_Close"));
        sizePolicy3.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy3);
        btnMenu_Close->setMinimumSize(QSize(40, 0));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);
        btnMenu_Close->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Close);


        horizontalLayout_2->addWidget(widget_menu);


        verticalLayout->addWidget(widget_title);

        widget_main = new QWidget(frmMain);
        widget_main->setObjectName(QStringLiteral("widget_main"));
        widget_main->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        verticalLayout_2 = new QVBoxLayout(widget_main);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit = new QLineEdit(widget_main);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);

        pushButton = new QPushButton(widget_main);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget_main);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget_main);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(widget_main);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_4->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_4->addWidget(radioButton_2);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setChecked(true);

        horizontalLayout_4->addWidget(checkBox);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_4->addWidget(checkBox_2);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_4->addWidget(comboBox);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setCalendarPopup(true);

        horizontalLayout_4->addWidget(dateEdit);


        verticalLayout_2->addWidget(groupBox);

        tabWidget = new QTabWidget(widget_main);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        treeWidget = new QTreeWidget(tab);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout_3->addWidget(treeWidget);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem10);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_4->addWidget(tableWidget);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);

        progressBar = new QProgressBar(widget_main);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout_2->addWidget(progressBar);

        horizontalSlider = new QSlider(widget_main);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider);

        horizontalScrollBar = new QScrollBar(widget_main);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalScrollBar);


        verticalLayout->addWidget(widget_main);


        retranslateUi(frmMain);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(frmMain);
    } // setupUi

    void retranslateUi(QDialog *frmMain)
    {
        frmMain->setWindowTitle(QApplication::translate("frmMain", "frmMain", Q_NULLPTR));
        lab_Ico->setText(QString());
        lab_Title->setText(QApplication::translate("frmMain", "\350\207\252\345\256\232\344\271\211UI\346\274\224\347\244\272(\344\275\234\350\200\205:\345\210\230\345\205\270\346\255\246 QQ:517216493)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnMenu->setToolTip(QApplication::translate("frmMain", "\350\217\234\345\215\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnMenu->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Min->setToolTip(QApplication::translate("frmMain", "\346\234\200\345\260\217\345\214\226", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnMenu_Min->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Max->setToolTip(QApplication::translate("frmMain", "\346\234\200\345\244\247\345\214\226", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnMenu_Max->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Close->setToolTip(QApplication::translate("frmMain", "\345\205\263\351\227\255", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnMenu_Close->setText(QString());
        lineEdit->setText(QApplication::translate("frmMain", "\344\273\212\345\244\251\345\244\251\346\260\224\344\270\215\351\224\231", Q_NULLPTR));
        pushButton->setText(QApplication::translate("frmMain", "\344\277\241\346\201\257\346\241\206", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("frmMain", "\350\257\242\351\227\256\346\241\206", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("frmMain", "\351\224\231\350\257\257\346\241\206", Q_NULLPTR));
        groupBox->setTitle(QString());
        radioButton->setText(QApplication::translate("frmMain", "\347\224\267", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("frmMain", "\345\245\263", Q_NULLPTR));
        checkBox->setText(QApplication::translate("frmMain", "\344\270\255\345\233\275", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("frmMain", "\347\276\216\345\233\275", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("frmMain", "\346\265\213\350\257\225\351\241\271\347\233\2561", Q_NULLPTR)
         << QApplication::translate("frmMain", "\346\265\213\350\257\225\351\241\271\347\233\2562", Q_NULLPTR)
         << QApplication::translate("frmMain", "\346\265\213\350\257\225\351\241\271\347\233\2563", Q_NULLPTR)
        );
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("frmMain", "\346\210\220\347\273\251", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("frmMain", "\345\255\246\345\217\267", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QApplication::translate("frmMain", "105", Q_NULLPTR));
        ___qtreewidgetitem1->setText(0, QApplication::translate("frmMain", "061104023", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(1, QApplication::translate("frmMain", "245", Q_NULLPTR));
        ___qtreewidgetitem2->setText(0, QApplication::translate("frmMain", "061104056", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(1, QApplication::translate("frmMain", "265", Q_NULLPTR));
        ___qtreewidgetitem3->setText(0, QApplication::translate("frmMain", "061104065", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("frmMain", "\351\200\211\351\241\271\345\215\2411", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("frmMain", "\345\255\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("frmMain", "\346\210\220\347\273\251", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("frmMain", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("frmMain", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("frmMain", "3", Q_NULLPTR));

        const bool __sortingEnabled1 = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 0);
        ___qtablewidgetitem5->setText(QApplication::translate("frmMain", "061104023", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 1);
        ___qtablewidgetitem6->setText(QApplication::translate("frmMain", "105", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(1, 0);
        ___qtablewidgetitem7->setText(QApplication::translate("frmMain", "061104025", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(1, 1);
        ___qtablewidgetitem8->setText(QApplication::translate("frmMain", "108", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(2, 0);
        ___qtablewidgetitem9->setText(QApplication::translate("frmMain", "061104056", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(2, 1);
        ___qtablewidgetitem10->setText(QApplication::translate("frmMain", "235", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled1);

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("frmMain", "\351\200\211\351\241\271\345\215\2412", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class frmMain: public Ui_frmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMAIN_H
