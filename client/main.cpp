#include "loginwindow.h"
#include "globals.h"
#include <QApplication>

uint CURRENT_DAY;
const uint SECONDS_PER_DAY = 30;
TcpSocket socket;
bool is_sound_muted = false;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LoginWindow w;
    w.show();

    return a.exec();
}
