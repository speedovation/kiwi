/****************************************************************************
**
** Copyright (C) 2007-2015 Speedovation
** Contact: Speedovation Lab (info@speedovation.com)
**
** KineticWing IDE CrashHandler
** http:// kineticwing.com
** This file is part of the core classes of the KiWi Editor (IDE)
**
** Author: Yash Bhardwaj
** License : Apache License 2.0
**
** All rights are reserved.
*/


#ifndef CRASHREPORTERWIDGET_H
#define CRASHREPORTERWIDGET_H

#include <QtWidgets/QWidget>

#include "HttpRequestWorker.h"

namespace Ui {
    class CrashReporterWidget;
}

class CrashReporterWidget : public QWidget
{
        Q_OBJECT

    public:
        explicit CrashReporterWidget(QWidget *parent = 0);
        ~CrashReporterWidget();

    protected:
        void changeEvent(QEvent *e);

    private slots:
        void on_btnSendReport_clicked();
        void handle_result(HttpRequestWorker *worker);

    private:
        Ui::CrashReporterWidget *ui;
};

#endif // CRASHREPORTERWIDGET_H
