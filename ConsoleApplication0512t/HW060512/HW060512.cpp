using namespace std;
#include <iostream>
class Figure {
protected:
	double x, y;
public:
	Figure(double X,double Y) {
		x = X;
		y = Y;
	}
	virtual void Area() = 0;
};
class Triangle :public Figure {
public:
	Triangle(double X, double Y) :Figure(X, Y){}
	void Area() {
		cout << "三角形的底是：" << x << ",高是：" << y << ",面积是"<<0.5*x*y<<endl;
	}
};
class Square :public Figure {
public:
	Square(double X,double Y):Figure(X,Y){}
	void Area() {
		cout << "矩形的长是：" << x << ",高是：" << y << ",面积是：" << x * y << endl;
	}
};
class Circle :public Figure {
public:
	Circle(double X):Figure(X,X){}
	void Area() {
		cout << "圆的半径是：" << x << ",面积是：" << 3.1415 * x * x << endl;
	}
};
//全局接口
void showArea(Figure& p) {
	p.Area();
}
int main()
{
	Figure* p;
	Triangle t(10.0, 6.0);
	Square s(10.0, 6.0);
	Circle c(10.0);
	p = &t;
	p->Area();
	p = &s;
	p->Area();
	p = &c;
	p->Area();

	cout << "-----------" << endl;
	showArea(t);
	showArea(s);
	showArea(c);
}