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
//�����������
float Rectangle::getArea() {
    return mLength * mWidth;
}
//�����ܳ�����
float Rectangle::getGirth() {
    return 2 * (mLength + mWidth);
}
//���������캯��
Rectangle::Rectangle(float  length, float  width):mLength(length),mWidth(width){}
//�޲������캯��
Rectangle::Rectangle(){}
//��������
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
