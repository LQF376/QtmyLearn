#ifndef TPERSON_H
#define TPERSON_H

#include <QObject>

class TPerson:public QObject
{
    Q_OBJECT
    Q_CLASSINFO("author", "wang");
    Q_CLASSINFO("company", "WPF");
    Q_CLASSINFO("version", "2.0.0");
    Q_PROPERTY(int age READ age WRITE setAge NOTIFY AgeChanged);
    Q_PROPERTY(int score MEMBER m_score);

private:
    int m_age = 10;
    int m_score=79;
    QString m_name;
public:
    explicit TPerson(QString aName, QObject* parent = nullptr);
    ~TPerson();
    int age();
    void setAge(int value);
    void incAge();
signals:
    void ageChanged(int value);
};

#endif // TPERSON_H
