#include "DocWriter.h"

int main()
{
	DocWriter dw; //��ü ����
	dw.SetFileName("test.txt"); //���� �̸� ����
	dw.SetContent("This is a test !");
	dw.Write();
	return 0;
}