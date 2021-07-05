#ifndef POINT_H
#define POINT_H

class Point
{
public:

	enum {MIN_X=0, MAX_X=100, MIN_Y=0, MAX_Y=100};
	typedef int COOR_T; //��ǥ�� Ÿ��

	//�����ڵ�
	void Print() const;
	void Offset(COOR_T x_delta, COOR_T y_delta); //�����ε�� �� �Լ��� ����
	void Offset(const Point& pt);

	Point(); //����Ʈ ������
	Point(COOR_T initialX, COOR_T initialY);
	Point(const Point& pt);

	//������, Ŭ���� ���ο��� ���������Ƿ� �ζ��� �Լ�!
	void SetX(COOR_T value);
	void SetY(COOR_T value);
	COOR_T GetX() const { return x; } //x �� �б�
	COOR_T GetY() const { return y; }

private: // ��� ����
	COOR_T x, y;
};
//�ܺο��� �ζ��� �Լ� �����, �ζ��� �Լ��� �ݵ�� ������� �ȿ� �־����, �ܼ� �����, �Լ� ȣ���ϴ� ��� �ƴ�
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