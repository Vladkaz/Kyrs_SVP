#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString str;
    str=ui->lineEdit->text();
    str.replace(" ","_");
    str+=".txt";
    QFile file (str);
        if (file.open(QIODevice::WriteOnly|QIODevice::Text)) {
         }
        QTextStream out(&file);
        out<<"Дата осмотра: "<<ui->dateEdit->date().toString("dd.MM.yyyy")<<"\n"
          <<"ФИО пациента: "<<ui->lineEdit->text()<<"  Год рождения: "<<ui->dateEdit_2->date().toString("dd.MM.yyyy")<<"\n"
         <<"Жалобы: "<<"\n"<<ui->textEdit->toPlainText()<<"\n"
        <<"Основные данные"<<"\n"
        <<"Общее состояние: "<<ui->comboBox->currentText()<<"\n"
        <<"Рост: "<<ui->lineEdit_2->text()<<" Вес: "<<ui->lineEdit_3->text()<<" Температура тела:"<<ui->lineEdit_4->text()<<"\n"
        <<"Индекс массы тела:"<<ui->lineEdit_5->text()<<"  "<<ui->lineEdit_6->text()<<"\n"
        <<"Кожные покровы: "<<ui->comboBox_2->currentText()
        <<"Дыхательная система"<<"\n"
        <<"Отдышка: "<<ui->comboBox_3->currentText()<<"\n"
        <<"Частота дыхательных движений в минуту: "<<ui->spinBox->value()<<"\n"
        <<"Дыхание: "<<ui->comboBox_4->currentText()<<"\n"
        <<"Хрипы: "<<ui->comboBox_5->currentText()<<"\n"<<"\n"
        <<"Диагноз:"<<"\n"<<ui->textEdit_2->toPlainText()<<"\n"
        <<"Рекомендации: "<<ui->textEdit_3->toPlainText();
        file.close();
}







void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{
    QString m,r,s;
    double index;
    r=ui->lineEdit_2->text();
    m=ui->lineEdit_3->text();
    index=(m.toDouble()/(r.toDouble()*r.toDouble()))*10000;
    s=QString::number(index);
    ui->lineEdit_5->setText(s);
    if (index<=16) ui->lineEdit_6->setText("Выраженный дефицит массы");
    if (index>16&&index<=18) ui->lineEdit_6->setText("Недостаточная масса тела");
    if (index>18&&index<=25) ui->lineEdit_6->setText("Нормальная масса тела");
    if (index>25&&index<=30) ui->lineEdit_6->setText("Избыточная масса тела");
    if (index>30&&index<=35) ui->lineEdit_6->setText("Ожирение первой степени");
    if (index>35&&index<=40) ui->lineEdit_6->setText("Ожирение второй степени");
    if (index>40) ui->lineEdit_6->setText("Ожирение третьей степени");
}




