#include "Rect.h"
#include <iostream>
using namespace std;

int main()
{
	Rect rc1; //Rect ��ü ����

	rc1.Print(); //���� ���

	rc1.SetRect(10, 20, 30, 40); //�� ����

	rc1.Print(); //���� ���

	rc1.SetTopLeft(Point(20, 20));

	rc1.Print();

	cout << "rc1.GetWidth() = " << rc1.GetWidth() << endl;
	cout << "rc1.GetHeight() = " << rc1.GetHeight() << endl;
	return 0;
}