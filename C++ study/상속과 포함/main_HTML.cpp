// HTML & DocWriter h, cpp �̿�
#include "HTMLWriter.h"
#include "DocWriter.h"

int main()
{
	//HTML Writer ��ü ����
	HTMLWriter hw("test.html", "This is HTMLWriter content");

	//DocWriter Ŭ������ �����ͷ� ��ü�� ����Ŵ
	DocWriter* pdW = &hw; //�θ� ��ü�� �����ͷ� �ڽ� ��ü�� ����Ű�� ���� ����, ���� ���� �Ұ�
	//DocWriter& dw=hw; // DocWriter Ŭ������ ���۷����� ��ü ���� 

	//���Ͽ� ����
	pdW->Write(); //DocWriter::Write() �Լ��� ȣ���, ���� ��ü�� �����̴����� ������� �������� Ÿ���� �������� ȣ��� �Լ� ������

	return 0;
}