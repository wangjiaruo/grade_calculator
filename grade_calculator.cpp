#include "grade_calculator.h"
#include "ui_grade_calculator.h"

grade_calculator::grade_calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::grade_calculator)
{
    ui->setupUi(this);

    setWindowTitle(tr("Grade Calculator"));
    ui->comboBox->setMinimumWidth(ui->comboBox->minimumSizeHint().width());

    ui->horizontalSlider->setRange(0,20);
    ui->horizontalSlider_2->setRange(0,20);
    ui->horizontalSlider_3->setRange(0,20);
    ui->horizontalSlider_4->setRange(0,20);
    ui->horizontalSlider_5->setRange(0,20);
    ui->horizontalSlider_6->setRange(0,20);
    ui->horizontalSlider_7->setRange(0,20);
    ui->horizontalSlider_8->setRange(0,20);
    ui->horizontalSlider_9->setRange(0,50);
    ui->horizontalSlider_10->setRange(0,50);
    ui->horizontalSlider_11->setRange(0,100);
    ui->spinBox->setRange(0,20);
    ui->spinBox_2->setRange(0,20);
    ui->spinBox_3->setRange(0,20);
    ui->spinBox_4->setRange(0,20);
    ui->spinBox_5->setRange(0,20);
    ui->spinBox_6->setRange(0,20);
    ui->spinBox_7->setRange(0,20);
    ui->spinBox_8->setRange(0,20);
    ui->spinBox_9->setRange(0,50);
    ui->spinBox_10->setRange(0,50);
    ui->spinBox_11->setRange(0,100);
    ui->label_13->setText(QString("0.0"));

//    ui->widget->hide();
//    ui->widget_2->hide();
//    ui->widget_3->hide();
//    ui->widget_4->hide();
//    ui->widget_5->hide();
//    ui->widget_6->hide();
//    ui->widget_7->hide();
//    ui->widget_8->hide();
//    ui->widget_9->hide();
//    ui->widget_10->hide();
//    ui->widget_11->hide();


    QObject::connect(ui->spinBox,SIGNAL(valueChanged(int)),this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_2,SIGNAL(valueChanged(int)),this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_3,SIGNAL(valueChanged(int)),this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_4,SIGNAL(valueChanged(int)),this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_5,SIGNAL(valueChanged(int)),this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_6,SIGNAL(valueChanged(int)),this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_7,SIGNAL(valueChanged(int)),this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_8,SIGNAL(valueChanged(int)),this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_9,SIGNAL(valueChanged(int)),this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_10,SIGNAL(valueChanged(int)),this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_11,SIGNAL(valueChanged(int)),this,SLOT(update_overall(int)));

    QObject::connect(ui->radioButton,SIGNAL(isChecked()),this,SLOT(update_overall(int)));
    QObject::connect(ui->radioButton_2,SIGNAL(isChecked()),this,SLOT(update_overall(int)));

    //QObject::connect(ui->comboBox,SIGNAL(activated(int)),this,SLOT(change_course(int)));
    //QObject::connect(ui->comboBox,SIGNAL(activated(int)),this,SLOT(update_overall(int)));

}

grade_calculator::~grade_calculator()
{
    delete ui;
}

//void grade_calculator::reset_value_to_zero(){
//    ui->horizontalSlider->setValue(0);
//    ui->horizontalSlider_2->setValue(0);
//    ui->horizontalSlider_3->setValue(0);
//    ui->horizontalSlider_4->setValue(0);
//    ui->horizontalSlider_5->setValue(0);
//    ui->horizontalSlider_6->setValue(0);
//    ui->horizontalSlider_7->setValue(0);
//    ui->horizontalSlider_8->setValue(0);
//    ui->horizontalSlider_9->setValue(0);
//    ui->horizontalSlider_10->setValue(0);
//    ui->horizontalSlider_11->setValue(0);
//    ui->spinBox->setValue(0);
//    ui->spinBox_2->setValue(0);
//    ui->spinBox_3->setValue(0);
//    ui->spinBox_4->setValue(0);
//    ui->spinBox_5->setValue(0);
//    ui->spinBox_6->setValue(0);
//    ui->spinBox_7->setValue(0);
//    ui->spinBox_8->setValue(0);
//    ui->spinBox_9->setValue(0);
//    ui->spinBox_10->setValue(0);
//    ui->spinBox_11->setValue(0);
//}

void grade_calculator::update_overall(int unused){
        int x1 = ui->spinBox->value();
        int x2 = ui->spinBox_2->value();
        int x3 = ui->spinBox_3->value();
        int x4 = ui->spinBox_4->value();
        int x5 = ui->spinBox_5->value();
        int x6 = ui->spinBox_6->value();
        int x7 = ui->spinBox_7->value();
        int x8 = ui->spinBox_8->value();
        int mt1 = ui->spinBox_9->value();
        int mt2 = ui->spinBox_10->value();
        int final = ui->spinBox_11->value();
        int sum=0;

        if(ui->radioButton->isChecked()){
            sum=(x1+x2+x3+x4+x5+x6+x7+x8)*0.25+mt1*0.2+mt2*0.2+final*0.4;
            QString text( QString::number(sum));
            ui->label_13->setText(text);
        }

        else if(ui->radioButton_2->isChecked()){
            if(mt1>mt2)
                sum=(x1+x2+x3+x4+x5+x6+x7+x8)*0.25+mt1*0.3+final*0.44;
            else if(mt1<=mt2)
                sum=(x1+x2+x3+x4+x5+x6+x7+x8)*0.25+mt2*0.3+final*0.44;
            QString text( QString::number(sum));
            ui->label_13->setText(text);
        }


    return;
}

//void grade_calculator::change_course(int index=0){
//    if(index==0){
//        ui->widget->hide();
//        ui->widget_2->hide();
//        ui->widget_3->hide();
//        ui->widget_4->hide();
//        ui->widget_5->hide();
//        ui->widget_6->hide();
//        ui->widget_7->hide();
//        ui->widget_8->hide();
//        ui->widget_9->hide();
//        ui->widget_10->hide();
//        ui->widget_11->hide();


//    }
//    else if(index==1){
//        ui->widget->show();
//        ui->widget_2->show();
//        ui->widget_3->show();
//        ui->widget_4->show();
//        ui->widget_5->show();
//        ui->widget_6->show();
//        ui->widget_7->show();
//        ui->widget_8->show();
//        ui->widget_9->show();
//        ui->widget_10->show();
//        ui->widget_11->show();
//    }
//    else if(index==2){
//        ui->widget->show();
//        ui->widget_2->show();
//        ui->widget_3->show();
//        ui->widget_4->hide();
//        ui->widget_5->hide();
//        ui->widget_6->hide();
//        ui->widget_7->hide();
//        ui->widget_8->hide();
//        ui->widget_9->show();
//        ui->widget_10->hide();
//        ui->widget_11->show();

//    }

//}
