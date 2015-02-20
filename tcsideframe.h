#ifndef TCSIDEFRAME_H
#define TCSIDEFRAME_H

#include <QFrame>

#include "tctablewgt.h"
#include "tcfsmodel.h"

class QComboBox;

class TCSideFrame : public QFrame
{
    Q_OBJECT
public:
    explicit TCSideFrame(QWidget *parent = 0);

private:
    QComboBox*              m_pCmbBoxVolumes;
    TCTableWgt*             m_pTblView;
    TCFSModel*              m_pFSModel;

signals:

public slots:

};

#endif // TCSIDEFRAME_H
