/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxUnder;
    QCheckBox *checkBoxBold;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioBlack;
    QRadioButton *radioRed;
    QRadioButton *radioBlue;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QPushButton *btnExit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(800, 600);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 60, 340, 268));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBoxItalic = new QCheckBox(layoutWidget);
        checkBoxItalic->setObjectName("checkBoxItalic");

        horizontalLayout->addWidget(checkBoxItalic);

        checkBoxUnder = new QCheckBox(layoutWidget);
        checkBoxUnder->setObjectName("checkBoxUnder");

        horizontalLayout->addWidget(checkBoxUnder);

        checkBoxBold = new QCheckBox(layoutWidget);
        checkBoxBold->setObjectName("checkBoxBold");

        horizontalLayout->addWidget(checkBoxBold);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        radioBlack = new QRadioButton(layoutWidget);
        radioBlack->setObjectName("radioBlack");
        radioBlack->setChecked(true);

        horizontalLayout_2->addWidget(radioBlack);

        radioRed = new QRadioButton(layoutWidget);
        radioRed->setObjectName("radioRed");

        horizontalLayout_2->addWidget(radioRed);

        radioBlue = new QRadioButton(layoutWidget);
        radioBlue->setObjectName("radioBlue");

        horizontalLayout_2->addWidget(radioBlue);


        verticalLayout->addLayout(horizontalLayout_2);

        plainTextEdit = new QPlainTextEdit(layoutWidget);
        plainTextEdit->setObjectName("plainTextEdit");
        QFont font;
        font.setPointSize(20);
        plainTextEdit->setFont(font);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnClear = new QPushButton(layoutWidget);
        btnClear->setObjectName("btnClear");
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/212.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnClear->setIcon(icon);

        horizontalLayout_3->addWidget(btnClear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnOK = new QPushButton(layoutWidget);
        btnOK->setObjectName("btnOK");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("images/322.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOK->setIcon(icon1);

        horizontalLayout_3->addWidget(btnOK);

        btnExit = new QPushButton(layoutWidget);
        btnExit->setObjectName("btnExit");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnExit->setIcon(icon2);

        horizontalLayout_3->addWidget(btnExit);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Dialog);
        QObject::connect(btnExit, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::close));
        QObject::connect(btnOK, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\344\277\241\345\217\267\344\270\216\346\247\275\347\232\204\344\275\277\347\224\250", nullptr));
        checkBoxItalic->setText(QCoreApplication::translate("Dialog", "Italic", nullptr));
        checkBoxUnder->setText(QCoreApplication::translate("Dialog", "Underline", nullptr));
        checkBoxBold->setText(QCoreApplication::translate("Dialog", "Bold", nullptr));
        radioBlack->setText(QCoreApplication::translate("Dialog", "Black", nullptr));
        radioRed->setText(QCoreApplication::translate("Dialog", "Red", nullptr));
        radioBlue->setText(QCoreApplication::translate("Dialog", "Blue", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Dialog", "Qt 6 C++\n"
"\345\274\200\345\217\221\346\214\207\345\215\227", nullptr));
        btnClear->setText(QCoreApplication::translate("Dialog", "\346\270\205\347\251\272", nullptr));
        btnOK->setText(QCoreApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        btnExit->setText(QCoreApplication::translate("Dialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
