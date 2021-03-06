#ifndef TASK_H
#define TASK_H

#include <QWidget>

namespace Ui {
class Task;
}

class Task : public QWidget
{
    Q_OBJECT

public:
    explicit Task(QWidget *parent = 0);
    ~Task();

    void setName(const QString& name, QWidget *parent = 0);
    QString name() const;
    bool isCompleted() const;

private:
    Ui::Task *ui;
};

#endif // TASK_H
