#include<iostream>
using  namespace  std;
class  Rect
{
public:
    Rect(float  l, float  w);                        //������ν��ܳ��Ϳ�
    float  getArea();                                      //�������
protected:
    float  mLength;                                            //���峤
    float  mWidth;                                              //�����

};
float  Rect::getArea() {
    return mLength * mWidth;
}
Rect::Rect(float  l, float  w):mLength(l),mWidth(w) {}
class cubiod {
public:
    cubiod(float  l, float  w,float j);                        
    float getVol();
    float Area();
protected:
    float  mLength;                                            
    float  mWidth;
    float  mhigh;

};
float cubiod::getVol(){
    return mLength * mWidth * mhigh;
}
float cubiod::Area() {
    return 2*(mLength * mWidth + mLength * mhigh + mWidth * mhigh);
}
cubiod::cubiod(float  l, float  w, float j):mLength(l), mWidth(w), mhigh(j){}

int  main23()
{
    int  j, k, l;
    cout << "��������εĳ��Ϳ�";
    cin >> j >> k;                                                                                        //���̽��ճ��Ϳ�
    Rect  r1(j, k);
    cout << "���ε����Ϊ��" << r1.getArea() << endl;
    cout << "������������ĸߣ�";
    cin >> l;                                                                                                  //���ܸ�
    cubiod  c1(j, k, l);
    cout << "���������Ϊ��" << c1.getVol() << endl;
    cout << "����������Ϊ��" << c1.Area();
    return  0;

}