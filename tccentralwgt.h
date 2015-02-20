#ifndef TCCENTRALWGT_H
#define TCCENTRALWGT_H

#include <QObject>
#include <QWidget>

//#include "tctablewgt.h"
//#include "tcfsmodel.h"

#include "tcsideframe.h"

class QTreeView;

class QSplitter;
class QComboBox;


class TCCentralWgt : public QWidget
{
    Q_OBJECT
public:
    explicit TCCentralWgt(QWidget *parent = 0);
    ~TCCentralWgt();

private:
    QSplitter*          m_pSpl;

//    QFileSystemModel*   m_pFSModel;
//    TCFSModel*          m_pFSModelRight;
    QTreeView*          m_pTreeView;
    TCSideFrame*        m_pRightFrame;
    TCSideFrame*        m_pLeftFrame;
//    TCTableWgt*         m_pTblRight;
    QComboBox*          m_pCbxDisc;

signals:

public slots:
};

#endif // TCCENTRALWGT_H
