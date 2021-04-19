#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <cstring>
#include <string>
#include <stdio.h>
#include "encryption.h"
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    Encryption *crypto;

private slots:
    void on_btnEncode_clicked();

    void on_btnDecode_clicked();

    void on_btnClean_clicked();

    void on_btnFile_clicked();

private:
    Ui::Widget *ui;

};
#endif // WIDGET_H
