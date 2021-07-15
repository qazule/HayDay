#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "globals.h"
#include "farmer.h"
#include "farm.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Farmer& farmer, Farm& farm, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void anotherDayPassed();

    void on_btnSilo_clicked();

    void on_btnChickenCoop_clicked();

    void on_btnCowPasture_clicked();

    void on_btnSheepPasture_clicked();

    void on_chickenLock_clicked();

    void on_cowLock_clicked();

    void on_sheepLock_clicked();

private:
    Ui::MainWindow *ui;
    Farmer& farmer;
    Farm& farm;
    QTimer* timer;

    void initUI();
    void checkTimeRelatedFunctions(bool add_day_xp);
    void showAnimals();
    void unlockAlfalfaField();
    void unlockChickenCoop();
    void unlockCowPasture();
    void unlockSheepPasture();
    void showChickens(int count);
    void showCows(int count);
    void showSheeps(int count);
    void showDay();
    void showCoin();
    void showXP();
    void showLevel();
};
#endif // MAINWINDOW_H
