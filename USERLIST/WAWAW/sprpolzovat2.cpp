#include "sprpolzovat2.h"
#include "ui_sprpolzovat2.h"

sprpolzovat2::sprpolzovat2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sprpolzovat2)
{
    ui->setupUi(this);
}

sprpolzovat2::~sprpolzovat2()
{
    delete ui;
}
