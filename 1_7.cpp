#include <iostream>
using namespace std;

class  Rectangle
{
public:
    Rectangle(void);
    Rectangle(float  length, float  width);
    ~Rectangle(void);
    float  getArea();
    float  getGirth();
private:
    float  mLength;
    float  mWidth;
};
//计算面积函数
float Rectangle::getArea() {
    return mLength * mWidth;
}
//计算周长函数
float Rectangle::getGirth() {
    return 2 * (mLength + mWidth);
}
//带参数构造函数
Rectangle::Rectangle(float  length, float  width):mLength(length),mWidth(width){}
//无参数构造函数
Rectangle::Rectangle(){}
//析构函数
Rectangle::~Rectangle() {}
int  main17()
{
    float  m, n;
    cout << "Input  the  Length  and  Width:  ";
    cin >> m >> n;
    Rectangle  r1(m, n);
    cout << "The  Area  is:  " << r1.getArea() << endl;
    Rectangle  r2(m, n);
    cout << "The  Perimeter:  " << r2.getGirth() << endl;
    return 0;
}
