#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QPixmap"
#include <QVector>
#include "window_with_prediction.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd(":/img/picture/crystal_ball.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);
    ui->text_1->QWidget::adjustSize();
    ui->text_2->QWidget::adjustSize();
    //ui->label_2->setStyleSheet("color: rgb(50, 0, 70)");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_B_ok_clicked()
{
    if (ui->B_ok->text() == "ок"){
    QString user_name = ui->L_name->text();
    ui->text_1->setText("Хорошо, " + user_name);
    ui->text_2->setText("Теперь введи свой вопрос");
    ui->text_2->setGeometry(240,250,20,20);
    ui->text_1->QWidget::adjustSize();
    ui->text_2->QWidget::adjustSize();
    ui->B_ok->setText("задать");
    }
    else
    {
    window_with_prediction window;
    window.setModal(true);
    // window.show();
    window.exec();
    }
}






