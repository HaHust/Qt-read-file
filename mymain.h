#ifndef MYMAIN_H
#define MYMAIN_H

#include <QMainWindow>
#include <QFile>
QT_BEGIN_NAMESPACE
namespace Ui { class MyMain; }
QT_END_NAMESPACE

class MyMain : public QMainWindow
{
    Q_OBJECT

public:
    MyMain(QWidget *parent = nullptr);
    ~MyMain();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MyMain *ui;
    QFile *file;
};
#endif // MYMAIN_H
