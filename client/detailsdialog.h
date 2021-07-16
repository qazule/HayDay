#ifndef DETAILSDIALOG_H
#define DETAILSDIALOG_H

#include <QDialog>
#include "farmer.h"
#include "farm.h"
#include "livingplaces.h"

namespace Ui {
class DetailsDialog;
}

class DetailsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DetailsDialog(QString title, Farmer& farmer, Farm& farm, QWidget *parent = nullptr);
    ~DetailsDialog();

private slots:
    void on_btnUpgrade_clicked();
    void on_btnFeed_clicked();

private:
    enum
    {
        SILO,
        CHICKEN_COOP,
        COW_PASTURE,
        SHEEP_PASTURE,
        WHEAT_FIELD,
        ALFALFA_FIELD
    };

    Ui::DetailsDialog *ui;
    QPushButton *btnFeedCollect = nullptr;
    Farmer& farmer;
    Farm& farm;
    int current_place;
    void initialByPlace(const Place& place);

    void initialSilo();
    void upgradeSilo();

    void initialLivingPlace(const LivingPlace& place);
    void upgradeLivingPlace(LivingPlace& place);

    void initialField(const Field& field);
    void upgradeField(Field& field);
    void plowField(AlfalfaField& field);
    void plantField(int amount,Field& field);
    void reapField(Field& field);
};

#endif // DETAILSDIALOG_H
