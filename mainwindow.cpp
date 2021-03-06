
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QInputDialog>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mTasks()
{
    ui->setupUi(this);
    connect(ui->addTaskBUtton, &QPushButton::clicked,
    this, &MainWindow::addTask);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addTask()
{
    bool ok;
    QString name = QInputDialog::getText(this,
         tr("Add task"),
         tr("Task name"),
         QLineEdit::Normal,
         tr("Untitled task"),           &ok);
   if (ok && !name.isEmpty()) {
       qDebug() << "Adding new task";
       Task* task = new Task("HELLO");
       mTasks.append(task);
       ui->tasksLayout⁻>addWidget(task);
     }
}
