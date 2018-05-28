/********************************************************************************
** Form generated from reading UI file 'Analyzer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYZER_H
#define UI_ANALYZER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_Analyzer
{
public:
    QVTKWidget *qvtkWidget;
    QTreeView *treeView;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Analyzer)
    {
        if (Analyzer->objectName().isEmpty())
            Analyzer->setObjectName(QStringLiteral("Analyzer"));
        Analyzer->resize(1145, 739);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Analyzer->sizePolicy().hasHeightForWidth());
        Analyzer->setSizePolicy(sizePolicy);
        qvtkWidget = new QVTKWidget(Analyzer);
        qvtkWidget->setObjectName(QStringLiteral("qvtkWidget"));
        qvtkWidget->setGeometry(QRect(260, 10, 600, 600));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qvtkWidget->sizePolicy().hasHeightForWidth());
        qvtkWidget->setSizePolicy(sizePolicy1);
        treeView = new QTreeView(Analyzer);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(10, 10, 241, 721));
        plainTextEdit = new QPlainTextEdit(Analyzer);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(870, 10, 271, 601));

        retranslateUi(Analyzer);

        QMetaObject::connectSlotsByName(Analyzer);
    } // setupUi

    void retranslateUi(QWidget *Analyzer)
    {
        Analyzer->setWindowTitle(QApplication::translate("Analyzer", "Analyzer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Analyzer: public Ui_Analyzer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYZER_H
