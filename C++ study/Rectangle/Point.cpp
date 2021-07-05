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
	Offset(pt.x, pt.y); //���� �Լ� ȣ��, �ߺ� ����
}


Point::Point(const Point& pt) //���� Ÿ�� ��ü�� ���� ���۷����� ���ڷ� ����
{
	cout << "���� ������ ȣ���!\n";
	x = pt.x;
	y = pt.y;
}

Point::Point() //���ڰ� ���� ������= ����Ʈ ������
{
	x = 0;
	y = 0;
}

Point::Point(COOR_T initialX, COOR_T initialY)  //���ڷ� �Ѿ�� ���� ����Ͽ� ��� ������ �ʱ�ȭ
{
	SetX(initialX);
	SetY(initialY);
}

void Point::Print() const
{
	cout << "(" << x << "," << y << ")\n";
}
