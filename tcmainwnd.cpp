#include "tcmainwnd.h"
#include "tccentralwgt.h"

TCMainWnd::TCMainWnd(QWidget *parent)
    : QMainWindow(parent)
{
    m_pCentralWidget            = new TCCentralWgt;


    setCentralWidget(m_pCentralWidget);
}

TCMainWnd::~TCMainWnd()
{

}
