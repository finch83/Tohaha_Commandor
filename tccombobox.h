#ifndef TCCOMBOBOX_H
#define TCCOMBOBOX_H

#include <QComboBox>

class QModelIndex;
class QString;

class TCComboBox : public QComboBox
{
public:
    TCComboBox();
    ~TCComboBox();

private:
    QModelIndex     m_CurrentModelIndex;

public slots:
    void setCurrentModelIndex(QString);


};

#endif // TCCOMBOBOX_H
