#include "Rect.h"
#include <iostream>
using namespace std;

int main()
{
	//다양한 생성자를 사용해 Rect 객체 생성
	Rect rc1;
	Rect rc2(Point(10, 20), Point(30, 40));
	Rect rc3(50, 60, 70, 80);

	rc1.Print();
	rc2.Print();
	rc3.Print();

	return 0;   
}