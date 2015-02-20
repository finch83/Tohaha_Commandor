#include "tcmainwnd.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TCMainWnd w;
    w.setWindowTitle("Tohaha Commandor");
    w.showMaximized();
    w.show();

    return a.exec();
}
