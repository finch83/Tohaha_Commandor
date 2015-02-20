#ifndef TCFSMODEL_H
#define TCFSMODEL_H

#include <QFileSystemModel>

class TCFSModel : public QFileSystemModel
{
public:
    TCFSModel();
    ~TCFSModel();

    void addFirstRow();

public slots:


};

#endif // TCFSMODEL_H
