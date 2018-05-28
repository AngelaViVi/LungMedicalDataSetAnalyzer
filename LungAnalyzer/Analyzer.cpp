#include "Analyzer.h"
#include "QFileDialog"

Analyzer::Analyzer(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Analyzer::~Analyzer()
{
}
//打开LIDC-IDRI
void Analyzer::OnOpenLIDC()
{
	QString dir = QFileDialog::getExistingDirectory(this, QStringLiteral("打开LIDC-IDRI父目录"), "G:/", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
	if (dir.isEmpty() == true)
		return;
	//先确认存在patient文件夹
	
	//找到所有的patient文件夹,向内一层找到所有的study,在向内一层找到所有的series,
	//然后构造出所有的series对象放vector里面,并找到那个xml.
}
