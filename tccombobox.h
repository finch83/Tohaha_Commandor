#ifndef TCCOMBOBOX_H
#define TCCOMBOBOX_H

#include <QComboBox>


class QModelIndex;
class QString;

class TCComboBox : public QComboBox
{
    Q_OBJECT
public:
    TCComboBox();
    ~TCComboBox();

private:
    QModelIndex     m_CurrentModelIndex;

public slots:
    void setCurrentModelIndex(QString);

signals:
    void sendModelIndex(QModelIndex);
};

#endif // TCCOMBOBOX_H
