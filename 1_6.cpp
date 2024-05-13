#include <iostream>
using namespace std;
const  float  PI = 3.14;
//定义圆类
class Circle {
public:
    Circle(float r):r(r){}
    float getArea() {
        return r * r * PI;
    }
    float getGirth() {
        return 2 * r * PI;
    }
private:
    float r;
};
int  main16()
{
    float  r;
    cout << "请输入圆的半径：";
    cin >> r;                                                                          //从键盘接受半径的值
    Circle  c1(r);                                                        //将值赋值给半径并调用定义好的函数
    cout << "圆的面积为：" << c1.getArea() << endl;
    Circle  c2(r);
    cout << "圆的周长为：" << c2.getGirth() << endl;
    return 0;
}