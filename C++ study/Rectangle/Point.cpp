#include "Point.h"
#include <iostream>
using namespace std;

void Point::Offset(COOR_T x_delta, COOR_T y_delta)
{
	SetX(x + x_delta);
	SetY(y + y_delta);
}

void Point::Offset(const Point& pt)
{
	Offset(pt.x, pt.y); //위의 함수 호출, 중복 방지
}


Point::Point(const Point& pt) //동일 타입 객체에 대한 레퍼런스를 인자로 받음
{
	cout << "복사 생성자 호출됨!\n";
	x = pt.x;
	y = pt.y;
}

Point::Point() //인자가 없는 생성자= 디폴트 생성자
{
	x = 0;
	y = 0;
}

Point::Point(COOR_T initialX, COOR_T initialY)  //인자로 넘어온 값을 사용하여 멤버 변수를 초기화
{
	SetX(initialX);
	SetY(initialY);
}

void Point::Print() const
{
	cout << "(" << x << "," << y << ")\n";
}
