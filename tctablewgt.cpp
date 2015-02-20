#include "tctablewgt.h"
#include <QHeaderView>
#include <QFileSystemModel>

TCTableWgt::TCTableWgt()
{
//***Set of face***
    setShowGrid(false);

//Hide QTableView vertical Header
    QHeaderView* pTblVerticalHeader = verticalHeader();
    pTblVerticalHeader->setVisible(false);
    pTblVerticalHeader->setResizeMode(QHeaderView::Fixed);
    pTblVerticalHeader->setDefaultSectionSize(20);


//***Set of behavior***
    connect(this, SIGNAL(doubleClicked(const QModelIndex&)),
            this, SLOT(setRootIndex(const QModelIndex&)));


}

TCTableWgt::~TCTableWgt()
{

}

/*
void TCTableWgt::setRootIndex(QString _path)
{
    this->setRootIndex( dynamic_cast<QFileSystemModel*>( model())->index(_path) );
}
*/

