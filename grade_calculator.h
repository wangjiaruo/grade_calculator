#ifndef GRADE_CALCULATOR_H
#define GRADE_CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class grade_calculator;
}

class grade_calculator : public QMainWindow
{
    Q_OBJECT

public:
    //void reset_value_to_zero();
    explicit grade_calculator(QWidget *parent = 0);
    ~grade_calculator();

signals:


public slots:
    void update_overall(int);
    //void change_course(int);

private:
    Ui::grade_calculator *ui;
};

#endif // GRADE_CALCULATOR_H
