#include "tcsideframe.h"

#include <QGridLayout>
#include <QDebug>

#include <QDir>
#include <QFileInfo>

TCSideFrame::TCSideFrame(QWidget *parent) :
    QFrame(parent)
{
    m_pCmbBoxVolumes                = new TCComboBox;
    m_pTblView                      = new TCTableWgt;
    m_pFSModel                      = new TCFSModel;

//    foreach( QFileInfo drive, QDir::drives() )
//        m_pCmbBoxVolumes->addItem(drive.absolutePath());


    m_pFSModel->setRootPath(QDir::currentPath());
//    m_pFSModel->setRootPath("E:");


    m_pTblView->setModel(m_pFSModel);
    m_pCmbBoxVolumes->setModel(m_pFSModel);


    QGridLayout* pGridLayout        = new QGridLayout;
    pGridLayout->addWidget(m_pCmbBoxVolumes, 0, 0, 1, 3);
    pGridLayout->addWidget(m_pTblView, 1, 0, 15, 15);

    connect(m_pCmbBoxVolumes, SIGNAL(sendModelIndex(QModelIndex)),
            m_pTblView, SLOT(setRootIndex(QModelIndex)));

    setLayout(pGridLayout);
}
