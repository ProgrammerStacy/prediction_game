#include "window_with_prediction.h"
#include "ui_window_with_prediction.h"

window_with_prediction::window_with_prediction(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::window_with_prediction)
{
    ui->setupUi(this);
    //ui->L_predict->setText(answer);
}

window_with_prediction::~window_with_prediction()
{
    delete ui;
}
