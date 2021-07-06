#ifndef RECT_H
#define RECT_H

#include "Point.h"

class Rect
{
public:
	Rect(); //생성자
	Rect(const Point& topLeft, const Point& bottomRight); //인자를 가진 생성자 추가
	Rect(int left, int top, int right, int bottom);

	//각 점의 값 지정/얻기
	void SetTopLeft(const Point& topleft);
	void SetBottomRight(const Point& bottomRight);
	void SetRect(int left, int top, int right, int bottom);
	Point GetTopLeft() const;
	Point GetBottomRight() const;
	void GetRect(int& left, int& top, int& right, int& bottom);

	//넓이, 높이 계산
	int GetWidth() const;
	int GetHeight() const;

	void Print() const;  //내용 출력

protected:
	Point _topLeft;
	Point _bottomRight;
};

#endif