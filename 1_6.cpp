#include <iostream>
using namespace std;
const  float  PI = 3.14;
//����Բ��
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
    cout << "������Բ�İ뾶��";
    cin >> r;                                                                          //�Ӽ��̽��ܰ뾶��ֵ
    Circle  c1(r);                                                        //��ֵ��ֵ���뾶�����ö���õĺ���
    cout << "Բ�����Ϊ��" << c1.getArea() << endl;
    Circle  c2(r);
    cout << "Բ���ܳ�Ϊ��" << c2.getGirth() << endl;
    return 0;
}