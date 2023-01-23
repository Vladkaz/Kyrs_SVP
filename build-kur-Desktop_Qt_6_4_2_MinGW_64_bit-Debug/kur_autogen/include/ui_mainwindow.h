/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QDateEdit *dateEdit_2;
    QLabel *label_5;
    QTextEdit *textEdit;
    QGroupBox *groupBox;
    QLabel *label_11;
    QComboBox *comboBox_3;
    QLabel *label_12;
    QSpinBox *spinBox;
    QLabel *label_13;
    QComboBox *comboBox_4;
    QLabel *label_14;
    QComboBox *comboBox_5;
    QGroupBox *groupBox_2;
    QLabel *label_6;
    QComboBox *comboBox;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLabel *label_9;
    QLineEdit *lineEdit_4;
    QLabel *label_10;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QTextEdit *textEdit_2;
    QLabel *label_15;
    QLabel *label_16;
    QTextEdit *textEdit_3;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(650, 720);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 10, 131, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        label->setFont(font);
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(10, 50, 110, 25));
        dateEdit->setFont(font);
        dateEdit->setDateTime(QDateTime(QDate(2022, 12, 31), QTime(3, 0, 0)));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 30, 81, 16));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 80, 49, 16));
        label_3->setFont(font);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 100, 381, 24));
        lineEdit->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(410, 80, 91, 16));
        label_4->setFont(font);
        dateEdit_2 = new QDateEdit(centralwidget);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setGeometry(QRect(410, 100, 110, 25));
        dateEdit_2->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 140, 49, 16));
        label_5->setFont(font);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 160, 631, 81));
        textEdit->setFont(font);
        textEdit->setReadOnly(false);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 400, 341, 141));
        groupBox->setFont(font);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 30, 61, 16));
        label_11->setFont(font);
        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(70, 30, 121, 24));
        comboBox_3->setFont(font);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 60, 241, 16));
        label_12->setFont(font);
        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(250, 60, 42, 25));
        spinBox->setFont(font);
        spinBox->setMaximum(40);
        spinBox->setValue(18);
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 80, 49, 16));
        label_13->setFont(font);
        comboBox_4 = new QComboBox(groupBox);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(70, 80, 121, 24));
        comboBox_4->setFont(font);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 110, 49, 16));
        label_14->setFont(font);
        comboBox_5 = new QComboBox(groupBox);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName("comboBox_5");
        comboBox_5->setGeometry(QRect(70, 110, 121, 24));
        comboBox_5->setFont(font);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 250, 441, 151));
        groupBox_2->setFont(font);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 30, 101, 16));
        label_6->setFont(font);
        comboBox = new QComboBox(groupBox_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(120, 30, 311, 24));
        comboBox->setFont(font);
        comboBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 70, 49, 16));
        label_7->setFont(font);
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(50, 70, 41, 24));
        lineEdit_2->setFont(font);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(130, 70, 49, 16));
        label_8->setFont(font);
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(170, 70, 41, 24));
        lineEdit_3->setFont(font);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(240, 70, 101, 16));
        label_9->setFont(font);
        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(350, 70, 31, 24));
        lineEdit_4->setFont(font);
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 110, 111, 16));
        label_10->setFont(font);
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(120, 110, 311, 24));
        comboBox_2->setFont(font);
        comboBox_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 650, 80, 24));
        pushButton->setFont(font);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(450, 250, 191, 101));
        groupBox_3->setFont(font);
        lineEdit_5 = new QLineEdit(groupBox_3);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setEnabled(false);
        lineEdit_5->setGeometry(QRect(10, 30, 81, 24));
        lineEdit_5->setFont(font);
        lineEdit_6 = new QLineEdit(groupBox_3);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setEnabled(false);
        lineEdit_6->setGeometry(QRect(10, 60, 171, 24));
        lineEdit_6->setFont(font);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(10, 570, 631, 70));
        textEdit_2->setFont(font);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 550, 49, 16));
        label_15->setFont(font);
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(370, 400, 91, 16));
        label_16->setFont(font);
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(370, 420, 271, 121));
        textEdit_3->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 650, 21));
        MainWindow->setMenuBar(menubar);
        QWidget::setTabOrder(dateEdit, lineEdit);
        QWidget::setTabOrder(lineEdit, dateEdit_2);
        QWidget::setTabOrder(dateEdit_2, textEdit);
        QWidget::setTabOrder(textEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, comboBox);
        QWidget::setTabOrder(comboBox, comboBox_2);
        QWidget::setTabOrder(comboBox_2, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, comboBox_3);
        QWidget::setTabOrder(comboBox_3, comboBox_4);
        QWidget::setTabOrder(comboBox_4, comboBox_5);
        QWidget::setTabOrder(comboBox_5, textEdit_3);
        QWidget::setTabOrder(textEdit_3, spinBox);
        QWidget::setTabOrder(spinBox, textEdit_2);
        QWidget::setTabOrder(textEdit_2, pushButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\236\321\201\320\274\320\276\321\202\321\200", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\236\320\241\320\234\320\236\320\242\320\240 \320\242\320\225\320\240\320\220\320\237\320\225\320\222\320\242\320\220", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\276\321\201\320\274\320\276\321\202\321\200\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        lineEdit->setInputMask(QCoreApplication::translate("MainWindow", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", nullptr));
        lineEdit->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\226\320\260\320\273\320\276\320\261\321\213", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\224\321\213\321\205\320\260\321\202\320\265\320\273\321\214\320\275\320\260\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\320\260", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\264\321\213\321\210\320\272\320\260", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "\320\236\321\202\321\201\321\203\321\202\321\201\321\202\320\262\321\203\320\265\321\202", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "\320\230\320\275\321\201\320\277\320\270\321\200\320\260\321\202\320\276\321\200\320\275\320\260\321\217", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\270\321\200\320\260\321\202\320\276\321\200\320\275\320\260\321\217", nullptr));

        label_12->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \320\264\321\213\321\205\320\260\321\202\320\265\320\273\321\214\320\275\321\213\321\205 \320\264\320\262\320\270\320\266\320\265\320\275\320\270\320\271 \320\262 \320\274\320\270\320\275\321\203\321\202\321\203", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\224\321\213\321\205\320\260\320\275\320\270\320\265", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "\320\222 \320\275\320\276\321\200\320\274\320\265", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "\320\226\320\265\321\201\321\202\320\272\320\276\320\265", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("MainWindow", "\320\236\321\201\320\273\320\260\320\261\320\273\320\265\320\275\320\275\320\276", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("MainWindow", "\320\222\320\265\320\267\320\270\320\272\321\203\320\273\321\217\321\200\320\275\320\276\320\265", nullptr));

        label_14->setText(QCoreApplication::translate("MainWindow", "\320\245\321\200\320\270\320\277\321\213", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("MainWindow", "\320\236\321\202\321\201\321\203\321\202\320\262\321\203\321\216\321\202", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("MainWindow", "\320\225\320\264\320\270\320\275\320\270\321\207\320\275\321\213\320\265", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("MainWindow", "\320\234\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\265\320\275\320\275\321\213\320\265", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("MainWindow", "\320\241\321\203\321\205\320\270\320\265", nullptr));
        comboBox_5->setItemText(4, QCoreApplication::translate("MainWindow", "\320\222\320\273\320\260\320\266\320\275\321\213\320\265", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\265\320\265 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\243\320\264\320\276\320\262\320\273\320\265\321\202\320\262\320\276\321\200\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\265", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\236\321\202\320\275\320\276\321\201\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \321\203\320\264\320\276\320\262\320\273\320\265\321\202\320\262\320\276\321\200\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\265", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\265\320\271 \321\201\321\202\320\265\320\277\320\265\320\275\320\270 \321\202\321\217\320\266\320\265\321\201\321\202\320\270", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\320\242\321\217\320\266\320\265\320\273\320\276\320\265", nullptr));

        comboBox->setCurrentText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\276\320\262\320\273\320\265\321\202\320\262\320\276\321\200\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\265", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\321\201\321\202", nullptr));
        lineEdit_2->setInputMask(QCoreApplication::translate("MainWindow", "000", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\201", nullptr));
        lineEdit_3->setInputMask(QCoreApplication::translate("MainWindow", "000", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \321\202\320\265\320\273\320\260", nullptr));
        lineEdit_4->setInputMask(QCoreApplication::translate("MainWindow", "00,0", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MainWindow", "36,6", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\266\320\275\321\213\320\265 \320\277\320\276\320\272\321\200\320\276\320\262\321\213", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "\320\222 \320\275\320\276\321\200\320\274\320\265", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\321\200\320\260\321\201\320\275\320\265\320\275\320\270\320\265", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "\320\237\320\270\320\263\320\274\320\265\320\275\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "\320\246\320\270\320\260\320\275\320\276\320\267", nullptr));

        comboBox_2->setCurrentText(QCoreApplication::translate("MainWindow", "\320\222 \320\275\320\276\321\200\320\274\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\275\320\264\320\265\320\272\321\201 \320\274\320\260\321\201\321\201\321\213 \321\202\320\265\320\273\321\213", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\320\260\320\263\320\275\320\276\320\267", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\272\320\276\320\274\320\265\320\275\320\264\320\260\321\206\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
