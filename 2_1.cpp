#include <iostream>
using namespace std;
class  myPoint
{
public:
    myPoint();
    myPoint(double  x, double  y);
    double  getX();
    double  getY();
private:
    double  mX, mY;
};
myPoint::myPoint() {}
myPoint::myPoint(double  x, double  y) :mX(x),mY(y){}
double myPoint::getX() {
    return mX;
}
double myPoint::getY() {
    return mY;
}
class Line {
public:
    Line(myPoint p1, myPoint p2):p1(p1),p2(p2){}
    double GetDistance(){
        return sqrt((p1.getX() - p2.getX()) * (p1.getX() - p2.getX()) + (p1.getY() - p2.getY()) * (p1.getY() - p2.getY()));
    }
private:
    myPoint p1, p2;
};
class Triangle {
public:
    Triangle(myPoint p1, myPoint p2, myPoint p3):p1(p1),p2(p2),p3(p3){}
    double getGirth() {
        Line l1(p1, p2), l2(p2, p3), l3(p1, p3);
        return l1.GetDistance() + l2.GetDistance() + l3.GetDistance();
    }
    double getArea() {
        Line l1(p1, p2), l2(p2, p3), l3(p1, p3);
        double i1 = l1.GetDistance();
        double i2 = l2.GetDistance();
        double i3 = l3.GetDistance();
        double p = (i1 + i2 + i3)/2;
        return sqrt(p * (p - i1) * (p - i2) * (p - i3));
    }
private:
    myPoint p1, p2, p3;
};

int  main21()
{
    double  x1, x2, x3, y1, y2, y3;
    cout << "请输入点1的x的值：";
    cin >> x1;
    cout << "请输入点1的y的值：";
    cin >> y1;
    cout << "请输入点2的x的值：";
    cin >> x2;
    cout << "请输入点2的y的值：";
    cin >> y2;
    cout << "请输入点3的x的值：";
    cin >> x3;
    cout << "请输入点3的y的值：";
    cin >> y3;
    cout << "点1的坐标为：(" << x1 << "," << y1 << ")" << endl;
    cout << "点2的坐标为：(" << x2 << "," << y2 << ")" << endl;
    cout << "点3的坐标为：(" << x3 << "," << y3 << ")" << endl;
    myPoint  p1(x1, y1), p2(x2, y2), p3(x3, y3);
    Line    line1(p1, p2);
    cout << "线长度:" << line1.GetDistance() << endl;
    Triangle  t(p1, p2, p3);
    cout << "该三角形的周长为：" << t.getGirth() << endl;
    cout << "该三角形的面积为：" << t.getArea() << endl;
    return  0;
}