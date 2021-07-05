#ifndef POINT_H
#define POINT_H

class Point
{
public:

	enum {MIN_X=0, MAX_X=100, MIN_Y=0, MAX_Y=100};
	typedef int COOR_T; //좌표의 타입

	//생성자들
	void Print() const;
	void Offset(COOR_T x_delta, COOR_T y_delta); //오버로드된 두 함수의 원형
	void Offset(const Point& pt);

	Point(); //디폴트 생성자
	Point(COOR_T initialX, COOR_T initialY);
	Point(const Point& pt);

	//접근자, 클래스 내부에서 정의했으므로 인라인 함수!
	void SetX(COOR_T value);
	void SetY(COOR_T value);
	COOR_T GetX() const { return x; } //x 값 읽기
	COOR_T GetY() const { return y; }

private: // 멤버 변수
	COOR_T x, y;
};
//외부에서 인라인 함수 만들기, 인라인 함수는 반드시 헤더파일 안에 있어야함, 단순 복사됨, 함수 호출하는 방식 아님
inline void Point::SetX(COOR_T value)
{
	if (value < MIN_X)
		x = MIN_X;
	else if (value > MAX_X)
		x = MAX_X;
	else
		x = value;
}
inline void Point::SetY(COOR_T value)
{
	if (value < MIN_Y)
		y = MIN_Y;
	else if (value > MAX_Y)
		y = MAX_Y;
	else
		y = value;
}

#endif