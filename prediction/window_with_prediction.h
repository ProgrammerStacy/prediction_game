#ifndef WINDOW_WITH_PREDICTION_H
#define WINDOW_WITH_PREDICTION_H

#include <QDialog>

namespace Ui {
class window_with_prediction;
}

class window_with_prediction : public QDialog
{
    Q_OBJECT

public:
    explicit window_with_prediction(QWidget *parent = nullptr);
    ~window_with_prediction();
private slots:
    QString predict();
private:
    Ui::window_with_prediction *ui;
};

#endif // WINDOW_WITH_PREDICTION_H
