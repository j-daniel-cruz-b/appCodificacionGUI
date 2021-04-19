#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    crypto = new Encryption();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnEncode_clicked(){
//    string texto = ui->textNormal->toPlainText();
    QString contenido = ui->textNormal->toPlainText();
    QByteArray ba = contenido.toLocal8Bit();
    const char *contenidoChar = ba.data();

    int n = sizeof(contenidoChar) / sizeof(char);

    char *textoDec = new char[n];

    strcpy(textoDec, contenidoChar);

    crypto->encode(textoDec, n);

    QString codificado(textoDec);

    ui->textEncode->setText(codificado);

}

void Widget::on_btnDecode_clicked(){
    QString contenido = ui->textEncode->toPlainText();
    QByteArray ba = contenido.toLocal8Bit();
    const char *contenidoChar = ba.data();

    int n = sizeof(contenidoChar) / sizeof(char);

    char *textoDec = new char[n];

    strcpy(textoDec, contenidoChar);

    crypto->decode(textoDec, n);

    QString codificado(textoDec);

    ui->textNormal->setPlainText(codificado);
}

void Widget::on_btnClean_clicked(){
ui->textEncode->setText("");
ui->textNormal->setPlainText("");
}

void Widget::on_btnFile_clicked(){

}
