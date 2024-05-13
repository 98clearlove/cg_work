#include <iostream>
#include <cmath>
using namespace std;
class  Clock        //ʱ��������
{
public:        //�ⲿ�ӿ�
    Clock(int  NewH = 0, int  NewM = 0, int  NewS = 0);
    void  ShowTime();
    Clock  operator  ++();                //ǰ�õ�Ŀ���������
    Clock  operator  ++(int); //���õ�Ŀ���������
    Clock  operator  +(Clock t);
    void normalize() {
        Minute += Second / 60;
        Second %= 60;
        Hour += Minute / 60;
        Minute %= 60;
        Hour %= 24;
        while (Second < 0) {
            Minute--;
            Second += 60;
        }
        while (Minute < 0) {
            Hour--;
            Minute += 60;
        }
        while (Hour < 0) {
            Hour = 24 - abs(Hour);
        }

    }

    //+���������


private:        //˽�����ݳ�Ա
    int  Hour, Minute, Second;
};
Clock::Clock(int  NewH  , int  NewM , int  NewS ){
    Hour = NewH; Minute = NewM; Second = NewS;
}
Clock  Clock::operator  ++() {
    Second++;
    (*this).normalize();
    return *this;
}               //ǰ�õ�Ŀ���������
Clock  Clock::operator  ++(int) {
    Clock temp = *this;
    ++*this;
    return temp;
} //���õ�Ŀ���������
Clock  Clock::operator  +(Clock t) {
    Clock temp;
    temp.Hour = Hour + t.Hour;
    temp.Minute = Minute + t.Minute;  
    temp.Second = Second + t.Second;
    return temp;
}
void  Clock::ShowTime()
{
    cout << Hour << ":" << Minute << ":" << Second << endl;
}
int  main22()
{
    Clock  c1(23, 59, 59), c2(5, 12, 10), c3;
    c1.ShowTime();
    c1++;
    c1.ShowTime();
    c3 = ++c2;
    c3.ShowTime();
    c3 = c2 + c1;
    c3.ShowTime();
    return  0;
}