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
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QPushButton *pushButton_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxUnder;
    QCheckBox *checkBoxBold;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(800, 600);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 360, 40, 12));
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(160, 360, 80, 18));
        widget = new QWidget(Dialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(130, 30, 340, 268));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBoxItalic = new QCheckBox(widget);
        checkBoxItalic->setObjectName("checkBoxItalic");

        horizontalLayout->addWidget(checkBoxItalic);

        checkBoxUnder = new QCheckBox(widget);
        checkBoxUnder->setObjectName("checkBoxUnder");

        horizontalLayout->addWidget(checkBoxUnder);

        checkBoxBold = new QCheckBox(widget);
        checkBoxBold->setObjectName("checkBoxBold");

        horizontalLayout->addWidget(checkBoxBold);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName("radioButton");
        radioButton->setChecked(true);

        horizontalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(widget);
        radioButton_3->setObjectName("radioButton_3");

        horizontalLayout_2->addWidget(radioButton_3);


        verticalLayout->addLayout(horizontalLayout_2);

        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName("plainTextEdit");
        QFont font;
        font.setPointSize(20);
        plainTextEdit->setFont(font);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/212.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("images/322.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);

        horizontalLayout_3->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_3);

#if QT_CONFIG(shortcut)
        label->setBuddy(pushButton_4);
#endif // QT_CONFIG(shortcut)

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\344\277\241\345\217\267\344\270\216\346\247\275\347\232\204\344\275\277\347\224\250", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\347\202\271\345\207\273(&N)", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        checkBoxItalic->setText(QCoreApplication::translate("Dialog", "Italic", nullptr));
        checkBoxUnder->setText(QCoreApplication::translate("Dialog", "Underline", nullptr));
        checkBoxBold->setText(QCoreApplication::translate("Dialog", "Bold", nullptr));
        radioButton->setText(QCoreApplication::translate("Dialog", "Black", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Dialog", "Red", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Dialog", "Blue", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Dialog", "Qt 6 C++\n"
"\345\274\200\345\217\221\346\214\207\345\215\227", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\346\270\205\347\251\272", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
