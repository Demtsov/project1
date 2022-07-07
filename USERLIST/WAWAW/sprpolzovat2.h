#ifndef SPRPOLZOVAT2_H
#define SPRPOLZOVAT2_H


#include <QDialog>

namespace Ui {
class sprpolzovat2;
}

class sprpolzovat2 : public QDialog
{
    Q_OBJECT

public:
    explicit sprpolzovat2(QWidget *parent = nullptr);
    ~sprpolzovat2();

private:
    Ui::sprpolzovat2 *ui;
};

#endif // SPRPOLZOVAT2_H
