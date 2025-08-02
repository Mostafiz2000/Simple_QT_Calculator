/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton_7;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_0;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_plusminus;
    QPushButton *pushButton_percent;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(241, 361);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(241, 361));
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 241, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(241, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"background-color: white;"));
        label->setInputMethodHints(Qt::ImhNone);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 120, 61, 61));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1, stop:0 #dadbde, stop:1 #f6f7fa)}"));
        pushButton_divide = new QPushButton(centralWidget);
        pushButton_divide->setObjectName(QString::fromUtf8("pushButton_divide"));
        pushButton_divide->setGeometry(QRect(180, 60, 61, 61));
        pushButton_divide->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_divide->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(255, 151, 57); color_ white; border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FF7832, stop:1 #FF9739);}"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(120, 120, 61, 61));
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1, stop:0 #dadbde, stop:1 #f6f7fa)}"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(60, 120, 61, 61));
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1, stop:0 #dadbde, stop:1 #f6f7fa)}"));
        pushButton_multiply = new QPushButton(centralWidget);
        pushButton_multiply->setObjectName(QString::fromUtf8("pushButton_multiply"));
        pushButton_multiply->setGeometry(QRect(180, 120, 61, 61));
        pushButton_multiply->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_multiply->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(255, 151, 57); color_ white; border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FF7832, stop:1 #FF9739);}"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 180, 61, 61));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1, stop:0 #dadbde, stop:1 #f6f7fa)}"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 180, 61, 61));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1, stop:0 #dadbde, stop:1 #f6f7fa)}"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 180, 61, 61));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1, stop:0 #dadbde, stop:1 #f6f7fa)}"));
        pushButton_equal = new QPushButton(centralWidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(180, 240, 61, 121));
        pushButton_equal->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(255, 151, 57); color_ white; border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FF7832, stop:1 #FF9739);}"));
        pushButton_dot = new QPushButton(centralWidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(60, 300, 61, 61));
        pushButton_dot->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(215,215,215); border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #BEBEBE, stop: 1 #D7D7D7);}"));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 300, 61, 61));
        pushButton_0->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton{border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1, stop:0 #dadbde, stop:1 #f6f7fa)}"));
        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(120, 300, 61, 61));
        pushButton_plus->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(255, 151, 57); color_ white; border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FF7832, stop:1 #FF9739);}"));
        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(180, 180, 61, 61));
        pushButton_minus->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(255, 151, 57); color_ white; border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #FF7832, stop:1 #FF9739);}"));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 240, 61, 61));
        pushButton_1->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1, stop:0 #dadbde, stop:1 #f6f7fa)}"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 240, 61, 61));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1, stop:0 #dadbde, stop:1 #f6f7fa)}"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 240, 61, 61));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1, stop:0 #dadbde, stop:1 #f6f7fa)}"));
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(0, 60, 61, 61));
        pushButton_clear->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(215,215,215); border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #BEBEBE, stop: 1 #D7D7D7);}"));
        pushButton_plusminus = new QPushButton(centralWidget);
        pushButton_plusminus->setObjectName(QString::fromUtf8("pushButton_plusminus"));
        pushButton_plusminus->setGeometry(QRect(60, 60, 61, 61));
        pushButton_plusminus->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_plusminus->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(215,215,215); border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #BEBEBE, stop: 1 #D7D7D7);}"));
        pushButton_percent = new QPushButton(centralWidget);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(120, 60, 61, 61));
        pushButton_percent->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(215,215,215); border: 1px solid gray;}\n"
"QPushButton:Pressed{background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #BEBEBE, stop: 1 #D7D7D7);}"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_plusminus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
