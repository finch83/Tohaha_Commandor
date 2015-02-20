#include "tcmainwnd.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TCMainWnd w;

//remove it
    w.size();
    w.setWindowTitle("Tohaha Commandor");
    w.showMaximized();
    w.show();

    return a.exec();
}
