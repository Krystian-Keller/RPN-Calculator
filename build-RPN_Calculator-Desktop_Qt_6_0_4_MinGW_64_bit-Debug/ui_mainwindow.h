/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QPushButton *Number_1;
    QPushButton *Number_2;
    QPushButton *Number_3;
    QPushButton *Number_5;
    QPushButton *Number_4;
    QPushButton *Number_6;
    QPushButton *Number_8;
    QPushButton *Number_9;
    QPushButton *Number_7;
    QPushButton *Number_0;
    QPushButton *Arrow_Down;
    QPushButton *Arrow_Up;
    QPushButton *Clear_Button;
    QPushButton *Op_Addiction;
    QPushButton *Op_Subtraction;
    QPushButton *Op_Multiplication;
    QPushButton *Op_Division;
    QPushButton *Enter_Button;
    QPushButton *Rol_Button;
    QPushButton *Del_Button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(287, 405);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 261, 61));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 80, 201, 31));
        Number_1 = new QPushButton(centralwidget);
        Number_1->setObjectName(QString::fromUtf8("Number_1"));
        Number_1->setGeometry(QRect(10, 120, 51, 41));
        Number_2 = new QPushButton(centralwidget);
        Number_2->setObjectName(QString::fromUtf8("Number_2"));
        Number_2->setGeometry(QRect(70, 120, 51, 41));
        Number_3 = new QPushButton(centralwidget);
        Number_3->setObjectName(QString::fromUtf8("Number_3"));
        Number_3->setGeometry(QRect(130, 120, 51, 41));
        Number_5 = new QPushButton(centralwidget);
        Number_5->setObjectName(QString::fromUtf8("Number_5"));
        Number_5->setGeometry(QRect(70, 170, 51, 41));
        Number_4 = new QPushButton(centralwidget);
        Number_4->setObjectName(QString::fromUtf8("Number_4"));
        Number_4->setGeometry(QRect(10, 170, 51, 41));
        Number_6 = new QPushButton(centralwidget);
        Number_6->setObjectName(QString::fromUtf8("Number_6"));
        Number_6->setGeometry(QRect(130, 170, 51, 41));
        Number_8 = new QPushButton(centralwidget);
        Number_8->setObjectName(QString::fromUtf8("Number_8"));
        Number_8->setGeometry(QRect(70, 220, 51, 41));
        Number_9 = new QPushButton(centralwidget);
        Number_9->setObjectName(QString::fromUtf8("Number_9"));
        Number_9->setGeometry(QRect(130, 220, 51, 41));
        Number_7 = new QPushButton(centralwidget);
        Number_7->setObjectName(QString::fromUtf8("Number_7"));
        Number_7->setGeometry(QRect(10, 220, 51, 41));
        Number_0 = new QPushButton(centralwidget);
        Number_0->setObjectName(QString::fromUtf8("Number_0"));
        Number_0->setGeometry(QRect(70, 270, 51, 41));
        Arrow_Down = new QPushButton(centralwidget);
        Arrow_Down->setObjectName(QString::fromUtf8("Arrow_Down"));
        Arrow_Down->setGeometry(QRect(130, 270, 51, 41));
        Arrow_Up = new QPushButton(centralwidget);
        Arrow_Up->setObjectName(QString::fromUtf8("Arrow_Up"));
        Arrow_Up->setGeometry(QRect(10, 270, 51, 41));
        Clear_Button = new QPushButton(centralwidget);
        Clear_Button->setObjectName(QString::fromUtf8("Clear_Button"));
        Clear_Button->setGeometry(QRect(220, 80, 51, 31));
        Op_Addiction = new QPushButton(centralwidget);
        Op_Addiction->setObjectName(QString::fromUtf8("Op_Addiction"));
        Op_Addiction->setGeometry(QRect(190, 120, 80, 41));
        Op_Subtraction = new QPushButton(centralwidget);
        Op_Subtraction->setObjectName(QString::fromUtf8("Op_Subtraction"));
        Op_Subtraction->setGeometry(QRect(190, 170, 80, 41));
        Op_Multiplication = new QPushButton(centralwidget);
        Op_Multiplication->setObjectName(QString::fromUtf8("Op_Multiplication"));
        Op_Multiplication->setGeometry(QRect(190, 220, 80, 41));
        Op_Division = new QPushButton(centralwidget);
        Op_Division->setObjectName(QString::fromUtf8("Op_Division"));
        Op_Division->setGeometry(QRect(190, 270, 80, 41));
        Enter_Button = new QPushButton(centralwidget);
        Enter_Button->setObjectName(QString::fromUtf8("Enter_Button"));
        Enter_Button->setGeometry(QRect(130, 320, 141, 41));
        Rol_Button = new QPushButton(centralwidget);
        Rol_Button->setObjectName(QString::fromUtf8("Rol_Button"));
        Rol_Button->setGeometry(QRect(70, 320, 51, 41));
        Del_Button = new QPushButton(centralwidget);
        Del_Button->setObjectName(QString::fromUtf8("Del_Button"));
        Del_Button->setGeometry(QRect(10, 320, 51, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 287, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Number_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Number_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Number_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Number_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Number_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Number_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Number_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Number_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Number_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Number_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Arrow_Down->setText(QCoreApplication::translate("MainWindow", "Down", nullptr));
        Arrow_Up->setText(QCoreApplication::translate("MainWindow", "Up", nullptr));
        Clear_Button->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        Op_Addiction->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Op_Subtraction->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Op_Multiplication->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Op_Division->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Enter_Button->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        Rol_Button->setText(QCoreApplication::translate("MainWindow", "Rol", nullptr));
        Del_Button->setText(QCoreApplication::translate("MainWindow", "Del", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
