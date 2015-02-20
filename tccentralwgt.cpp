#include "tccentralwgt.h"

#include <QDebug>
#include <QDir>
#include <QFileInfo>

#include <QFileSystemModel>
#include <QTreeView>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSplitter>
#include <QComboBox>

TCCentralWgt::TCCentralWgt(QWidget *parent) : QWidget(parent)
{
    m_pRightFrame           = new TCSideFrame;
    m_pLeftFrame           = new TCSideFrame;


    m_pSpl                  = new QSplitter(Qt::Horizontal);
    m_pSpl->setChildrenCollapsible(false);
    m_pSpl->addWidget(m_pLeftFrame);
    m_pSpl->addWidget(m_pRightFrame);

    QVBoxLayout* vbxLayout  = new QVBoxLayout;
    vbxLayout->addWidget(m_pSpl);


    setLayout(vbxLayout);
}


TCCentralWgt::~TCCentralWgt()
{
}
















