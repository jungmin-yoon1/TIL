// HTML & DocWriter h, cpp �̿�
#include "HTMLWriter.h"

int main()
{
	//HTML Writer ��ü ����
	HTMLWriter hw("test.html", "HTMLWriter Content");

	//DocWriter Ŭ������ �����ͷ� ��ü�� ����Ŵ
	DocWriter* pDW = &hw; //�θ� ��ü�� �����ͷ� �ڽ� ��ü�� ����Ű�� ���� ����, ���� ���� �Ұ�
	//DocWriter& dw=hw; // DocWriter Ŭ������ ���۷����� ��ü ���� 

	//���Ͽ� ����
	pDW->Write(); //DocWriter::Write() �Լ��� ȣ���, ���� ��ü�� �����̴����� ������� �������� Ÿ���� �������� ȣ��� �Լ� ������
	
	return 0;
}