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
//��LIDC-IDRI
void Analyzer::OnOpenLIDC()
{
	QString dir = QFileDialog::getExistingDirectory(this, QStringLiteral("��LIDC-IDRI��Ŀ¼"), "G:/", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
	if (dir.isEmpty() == true)
		return;
	//��ȷ�ϴ���patient�ļ���
	
	//�ҵ����е�patient�ļ���,����һ���ҵ����е�study,������һ���ҵ����е�series,
	//Ȼ��������е�series�����vector����,���ҵ��Ǹ�xml.
}
