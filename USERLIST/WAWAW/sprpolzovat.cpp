#include "sprpolzovat.h"
#include "ui_sprpolzovat.h"
#include"spravka.h"
#include"sprpolzovat2.h"

SPRPOLZOVAT::SPRPOLZOVAT(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SPRPOLZOVAT)
{
    ui->setupUi(this);
}

SPRPOLZOVAT::~SPRPOLZOVAT()
{
    delete ui;
}

void SPRPOLZOVAT::on_pushButton_2_clicked()
{
    t = new spravka(this);
    t -> show();
}

void SPRPOLZOVAT::on_pushButton_clicked()
{
    m = new sprpolzovat2(this);
    m -> show();
}
