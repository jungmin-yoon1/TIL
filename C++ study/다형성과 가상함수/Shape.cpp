#include <iostream>
using namespace std;

//일반적인 도형 클래스
class Shape
{
public:
	void Move(double x, double y); //자신을 움직이는 함수
	virtual void Draw() const; // 가상함수로 만듦 , 객체의 타입에 맞는 Draw() 함수가 호출되도록 함
							   // 프로그래밍에서의 다형성: 타입에 관계없이 동일한 방법으로 다룰수 있는 능력, 다양한 형태를 가짐

	Shape();
	Shape(double x, double y);

protected:
	double _x, _y;
};

Shape::Shape()
{
	_x = _y = 0.0;
}

Shape::Shape(double x, double y)
{
	_x = x;
	_y = y;
}

void Shape::Move(double x, double y)
{
	_x = x;
	_y = y;
}

void Shape::Draw() const
{
	cout << "[Shape] Position = (" << _x << "," << _y << ")\n";
}

//사각형 상징하는 클래스
class Rectangle :public Shape
{
public:
	void Draw() const;
	void Resize(double width, double height);

	Rectangle();
	Rectangle(double x, double y, double width, double height);

protected:
	double _width;
	double _height;

};

Rectangle::Rectangle()
{
	_width = _height = 100.0f;
}

Rectangle::Rectangle(double x, double y, double width, double height)
	: Shape(x, y)
{
	Resize(width, height);
}

void Rectangle::Draw() const
{
	cout << "[Rectangle] Position = (" << _x << "," << _y << ") " "Size = (" << _width << "," << _height << ")\n";
}

void Rectangle::Resize(double width, double height)
{
	_width = width;
	_height = height;
}

//원을 상징하는 클래스
class Circle:public Shape
{
public:
	void Draw() const;
	void SetRadius(double radius);
	Circle();
	Circle(double x, double y, double radius);

protected:
	double _radius;
};

Circle::Circle()
{
	_radius = 100.0f;
}

Circle::Circle(double x, double y, double radius)
	: Shape(x,y)
{
	SetRadius(radius);
}

void Circle::SetRadius(double radius)
{
	_radius = radius;
}

void Circle::Draw() const
{
	cout << "[Circle] Position =(" << _x << "," << _y << ") " "Radius = " << _radius << endl;
}

int main()
{
	//도형을 담을 배열 준비
	Shape* shape[5] = { NULL };

	//각 타입의 객체를 생성하여 배열에 보관
	shape[0] = new Circle(100, 100, 50);
	shape[1] = new Rectangle(300, 300, 100, 100);
	shape[2] = new Rectangle(200, 100, 50, 150);
	shape[3] = new Circle(100, 300, 150);
	shape[4] = new Rectangle(200, 200, 200, 200);

	//배열에 보관된 모든 객체를 그리기
	for (int i = 0; i < 5; ++i)
	{
		shape[i]->Draw();
	}

	//배열의 보관된 모든 객체를 소멸시킴
	for (int i = 0; i < 5; ++i)
	{
		delete shape[i];
		shape[i] = NULL;
	}


	//도형 객체 생성 및 그리기
	//Shape s(100,100);
	Shape s;
	s.Move(100, 100);
	s.Draw();

	//사각형 객체 생성 및 그리기
	//Rectangle r(200,100,50,50);
	Rectangle r;
	r.Move(200, 100);
	r.Resize(50, 50);
	r.Draw();

	//원 객체 생성 및 그리기
	//Circle c(300,100,30);
	Circle c;
	c.Move(300, 100);
	c.SetRadius(30);
	c.Draw();

	return 0;
}
