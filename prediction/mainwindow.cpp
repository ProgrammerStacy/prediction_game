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
    }
    else
    {
        window_with_prediction window;
        window.setModal(true);
        window.exec();
    }
}


QString MainWindow::predict()
{
    QString yours_answer;
    QVector <QString> answer = {"Бесспорно",	"Мне кажется - да",	"Пока неясно, попробуй снова",	"Даже не думай",
                             "Предрешено",	"Вероятнее всего",	"Спроси позже",	"Мой ответ - нет",
                             "Никаких сомнений",	"Хорошие перспективы",	"Лучше не рассказывать",	"По моим данным - нет",
                             "Определённо да",	"Знаки говорят - да",	"Сейчас нельзя предсказать",	"Перспективы не очень хорошие",
                             "Можешь быть уверен в этом",	"Да",	"Сконцентрируйся и спроси опять",	"Весьма сомнительно"};
    int r = rand() % 20;
    yours_answer = answer[r];

}



