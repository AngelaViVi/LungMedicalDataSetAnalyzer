#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LungAnalyzer.h"

class LungAnalyzer : public QMainWindow
{
	Q_OBJECT

public:
	LungAnalyzer(QWidget *parent = Q_NULLPTR);

private:
	Ui::LungAnalyzerClass ui;
};
