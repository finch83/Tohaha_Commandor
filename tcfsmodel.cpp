#include "tcfsmodel.h"

TCFSModel::TCFSModel()
{
    addFirstRow();
}

TCFSModel::~TCFSModel()
{

}

void TCFSModel::addFirstRow()
{
    this->insertRow(0);
}
