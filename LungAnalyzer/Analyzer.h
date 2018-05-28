#pragma once

#include <QWidget>
#include "ui_Analyzer.h"

class Analyzer : public QWidget
{
	Q_OBJECT

public:
	Analyzer(QWidget *parent = Q_NULLPTR);
	~Analyzer();

private:
	Ui::Analyzer ui;
private:
	std::vector<std::string >* LidcSeriesList;
	void OnOpenLIDC();
};
