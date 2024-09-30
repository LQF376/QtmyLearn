#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent): QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);
    boy = new TPerson("小明", this);
    boy->setProperty("score", 95);
    boy->setProperty("age", 10);
    boy->setProperty("sex", "Boy");
    connect(boy, SIGNAL(ageChanged(int)), this, SLOT(do_ageChange(int)));

    girl = new TPerson("小丽", this);
    girl->setProperty("score", 81);
    girl->setProperty("age", 20);
    girl->setProperty("sex", "Girl");
    connect(girl, SIGNAL(ageChanged(int)), this, SLOT(do_ageChange(int)));

}

Widget::~Widget()
{
    delete ui;
}
