/********************************************************************************
** Form generated from reading UI file 'udpclient.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPCLIENT_H
#define UI_UDPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_udpclientClass
{
public:

    void setupUi(QDialog *udpclientClass)
    {
        if (udpclientClass->objectName().isEmpty())
            udpclientClass->setObjectName(QStringLiteral("udpclientClass"));
        udpclientClass->resize(600, 400);

        retranslateUi(udpclientClass);

        QMetaObject::connectSlotsByName(udpclientClass);
    } // setupUi

    void retranslateUi(QDialog *udpclientClass)
    {
        udpclientClass->setWindowTitle(QApplication::translate("udpclientClass", "udpclient", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class udpclientClass: public Ui_udpclientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPCLIENT_H
