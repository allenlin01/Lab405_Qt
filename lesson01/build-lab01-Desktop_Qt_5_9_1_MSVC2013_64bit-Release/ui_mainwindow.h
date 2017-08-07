/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionexit;
    QWidget *centralWidget;
    QDialogButtonBox *button;
    QLabel *label;
    QLabel *label_sum;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_Gizz;
    QCheckBox *checkBox_frenchfries;
    QCheckBox *checkBox_bighamburger;
    QCheckBox *checkBox_chicken;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_cola;
    QCheckBox *checkBox_soda;
    QCheckBox *checkBox_lemonredtea;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_cash;
    QRadioButton *radioButton_point;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QStringLiteral("actionexit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        button = new QDialogButtonBox(centralWidget);
        button->setObjectName(QStringLiteral("button"));
        button->setGeometry(QRect(120, 200, 156, 41));
        button->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 30, 91, 31));
        label->setAlignment(Qt::AlignCenter);
        label_sum = new QLabel(centralWidget);
        label_sum->setObjectName(QStringLiteral("label_sum"));
        label_sum->setGeometry(QRect(30, 190, 61, 31));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 80, 320, 86));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox_Gizz = new QCheckBox(widget);
        checkBox_Gizz->setObjectName(QStringLiteral("checkBox_Gizz"));

        verticalLayout->addWidget(checkBox_Gizz);

        checkBox_frenchfries = new QCheckBox(widget);
        checkBox_frenchfries->setObjectName(QStringLiteral("checkBox_frenchfries"));

        verticalLayout->addWidget(checkBox_frenchfries);

        checkBox_bighamburger = new QCheckBox(widget);
        checkBox_bighamburger->setObjectName(QStringLiteral("checkBox_bighamburger"));

        verticalLayout->addWidget(checkBox_bighamburger);

        checkBox_chicken = new QCheckBox(widget);
        checkBox_chicken->setObjectName(QStringLiteral("checkBox_chicken"));

        verticalLayout->addWidget(checkBox_chicken);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        checkBox_cola = new QCheckBox(widget);
        checkBox_cola->setObjectName(QStringLiteral("checkBox_cola"));

        verticalLayout_2->addWidget(checkBox_cola);

        checkBox_soda = new QCheckBox(widget);
        checkBox_soda->setObjectName(QStringLiteral("checkBox_soda"));

        verticalLayout_2->addWidget(checkBox_soda);

        checkBox_lemonredtea = new QCheckBox(widget);
        checkBox_lemonredtea->setObjectName(QStringLiteral("checkBox_lemonredtea"));

        verticalLayout_2->addWidget(checkBox_lemonredtea);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        radioButton_cash = new QRadioButton(widget);
        radioButton_cash->setObjectName(QStringLiteral("radioButton_cash"));

        verticalLayout_3->addWidget(radioButton_cash);

        radioButton_point = new QRadioButton(widget);
        radioButton_point->setObjectName(QStringLiteral("radioButton_point"));

        verticalLayout_3->addWidget(radioButton_point);


        horizontalLayout->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionexit->setText(QApplication::translate("MainWindow", "exit", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\351\273\236\351\244\220\347\263\273\347\265\261", Q_NULLPTR));
        label_sum->setText(QString());
        checkBox_Gizz->setText(QApplication::translate("MainWindow", "\345\220\211\345\243\253\345\240\241  NT60", Q_NULLPTR));
        checkBox_frenchfries->setText(QApplication::translate("MainWindow", "\350\226\257\346\242\235      NT40", Q_NULLPTR));
        checkBox_bighamburger->setText(QApplication::translate("MainWindow", "\345\244\247\351\272\245\345\205\213  NT80", Q_NULLPTR));
        checkBox_chicken->setText(QApplication::translate("MainWindow", "\351\272\245\351\246\231\351\233\236  NT70", Q_NULLPTR));
        checkBox_cola->setText(QApplication::translate("MainWindow", "\345\217\257\346\250\202  NT35", Q_NULLPTR));
        checkBox_soda->setText(QApplication::translate("MainWindow", "\351\233\252\347\242\247  NT35", Q_NULLPTR));
        checkBox_lemonredtea->setText(QApplication::translate("MainWindow", "\346\252\270\346\252\254\347\264\205\350\214\266 NT30", Q_NULLPTR));
        radioButton_cash->setText(QApplication::translate("MainWindow", "\347\217\276\351\207\221", Q_NULLPTR));
        radioButton_point->setText(QApplication::translate("MainWindow", "\351\273\236\346\225\270\345\215\241\345\233\236\351\245\21310\345\205\203", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
