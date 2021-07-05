#include "Rect.h"
#include <iostream>
using namespace std;

int main()
{
	Rect rc1; //Rect 객체 생성

	rc1.Print(); //내용 출력

	rc1.SetRect(10, 20, 30, 40); //값 변경

	rc1.Print(); //내용 출력

	rc1.SetTopLeft(Point(20, 20));

	rc1.Print();

	cout << "rc1.GetWidth() = " << rc1.GetWidth() << endl;
	cout << "rc1.GetHeight() = " << rc1.GetHeight() << endl;
	return 0;
}