#include "tccombobox.h"
#include <QModelIndex>

#include <QDebug>

TCComboBox::TCComboBox()
{
    connect(this, SIGNAL(activated(QString)),
            this, SLOT(setCurrentModelIndex(QString)));

}

TCComboBox::~TCComboBox()
{

}

void TCComboBox::setCurrentModelIndex(QString _path)
{
        m_CurrentModelIndex = rootModelIndex();
        qDebug() << m_CurrentModelIndex;
        emit sendModelIndex(m_CurrentModelIndex);
}
