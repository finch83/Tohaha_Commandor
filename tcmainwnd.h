#ifndef TCMAINWND_H
#define TCMAINWND_H

#include"tccentralwgt.h"

#include <QMainWindow>

class TCMainWnd : public QMainWindow
{
    Q_OBJECT

public:
    TCMainWnd(QWidget *parent = 0);
    ~TCMainWnd();

private:
    TCCentralWgt*           m_pCentralWidget;
};

#endif // TCMAINWND_H
