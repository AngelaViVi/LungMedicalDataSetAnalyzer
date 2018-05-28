/********************************************************************************
** Form generated from reading UI file 'LungAnalyzer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LUNGANALYZER_H
#define UI_LUNGANALYZER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_LungAnalyzerClass
{
public:
    QAction *action_LIDC_IDRI;
    QAction *action_Luna16;
    QAction *action_DSB2017;
    QAction *action_2;
    QAction *action_3;
    QWidget *centralWidget;
    QTreeView *treeView;
    QVTKWidget *qvtkWidget;
    QWidget *widget;
    QLabel *label;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_3;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LungAnalyzerClass)
    {
        if (LungAnalyzerClass->objectName().isEmpty())
            LungAnalyzerClass->setObjectName(QStringLiteral("LungAnalyzerClass"));
        LungAnalyzerClass->resize(1144, 717);
        action_LIDC_IDRI = new QAction(LungAnalyzerClass);
        action_LIDC_IDRI->setObjectName(QStringLiteral("action_LIDC_IDRI"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/LungAnalyzer/Resources/global.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_LIDC_IDRI->setIcon(icon);
        action_Luna16 = new QAction(LungAnalyzerClass);
        action_Luna16->setObjectName(QStringLiteral("action_Luna16"));
        action_DSB2017 = new QAction(LungAnalyzerClass);
        action_DSB2017->setObjectName(QStringLiteral("action_DSB2017"));
        action_2 = new QAction(LungAnalyzerClass);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_3 = new QAction(LungAnalyzerClass);
        action_3->setObjectName(QStringLiteral("action_3"));
        centralWidget = new QWidget(LungAnalyzerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(10, 10, 256, 661));
        qvtkWidget = new QVTKWidget(centralWidget);
        qvtkWidget->setObjectName(QStringLiteral("qvtkWidget"));
        qvtkWidget->setGeometry(QRect(270, 10, 621, 661));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(900, 10, 241, 641));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 54, 12));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 10, 113, 20));
        LungAnalyzerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LungAnalyzerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1144, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_3 = new QMenu(menu);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        LungAnalyzerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LungAnalyzerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LungAnalyzerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LungAnalyzerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LungAnalyzerClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(menu_3->menuAction());
        menu->addAction(action_2);
        menu_3->addAction(action_LIDC_IDRI);
        menu_3->addAction(action_Luna16);
        menu_3->addAction(action_DSB2017);
        menu_2->addAction(action_3);
        mainToolBar->addAction(action_LIDC_IDRI);

        retranslateUi(LungAnalyzerClass);
        QObject::connect(action_LIDC_IDRI, SIGNAL(triggered()), LungAnalyzerClass, SLOT(OnOpenLIDC()));

        QMetaObject::connectSlotsByName(LungAnalyzerClass);
    } // setupUi

    void retranslateUi(QMainWindow *LungAnalyzerClass)
    {
        LungAnalyzerClass->setWindowTitle(QApplication::translate("LungAnalyzerClass", "LungAnalyzer", Q_NULLPTR));
        action_LIDC_IDRI->setText(QApplication::translate("LungAnalyzerClass", "\346\211\223\345\274\200LIDC-IDRI\347\233\256\345\275\225", Q_NULLPTR));
        action_Luna16->setText(QApplication::translate("LungAnalyzerClass", "\346\211\223\345\274\200Luna16\347\233\256\345\275\225", Q_NULLPTR));
        action_DSB2017->setText(QApplication::translate("LungAnalyzerClass", "\346\211\223\345\274\200DSB2017\347\233\256\345\275\225", Q_NULLPTR));
        action_2->setText(QApplication::translate("LungAnalyzerClass", "\351\200\200\345\207\272", Q_NULLPTR));
        action_3->setText(QApplication::translate("LungAnalyzerClass", "\345\205\263\344\272\216", Q_NULLPTR));
        label->setText(QApplication::translate("LungAnalyzerClass", "TextLabel", Q_NULLPTR));
        menu->setTitle(QApplication::translate("LungAnalyzerClass", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("LungAnalyzerClass", "\346\211\223\345\274\200", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("LungAnalyzerClass", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LungAnalyzerClass: public Ui_LungAnalyzerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LUNGANALYZER_H
