#include "window_with_prediction.h"
#include "ui_window_with_prediction.h"
//#include <QString>
//#include <QVector>
window_with_prediction::window_with_prediction(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::window_with_prediction)
{
    ui->setupUi(this);
    QString pr = predict();
    ui->label->setText(pr);
    ui->label->QWidget::adjustSize();
}

QString window_with_prediction::predict()
{
    QString yours_answer;
    QVector <QString> answer = {"Бесспорно",	"Мне кажется - да",	"Пока неясно, попробуй снова",	"Даже не думай",
                               "Предрешено",	"Вероятнее всего",	"Спроси позже",	"Мой ответ - нет",
                               "Никаких сомнений",	"Хорошие перспективы",	"Лучше не рассказывать",	"По моим данным - нет",
                               "Определённо да",	"Знаки говорят - да",	"Сейчас нельзя предсказать",	"Перспективы не очень хорошие",
                               "Можешь быть уверен в этом",	"Да",	"Сконцентрируйся и спроси опять",	"Весьма сомнительно"};
    int r = rand() % 20;
    yours_answer = answer[r];
    return yours_answer;

}
window_with_prediction::~window_with_prediction()
{
    delete ui;
}
