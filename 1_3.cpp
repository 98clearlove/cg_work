#include  <iostream>
using  namespace  std;
class Complex {
public:
    // Ĭ�Ϲ��캯��
    Complex() {}

    // �������Ĺ��캯������ʼ��ʵ��a���鲿b
    Complex(int a, int b) :a(a), b(b) {}

    // �ӷ�����������һ���µ�Complex����
    Complex myAdd(const Complex& z) {
        Complex c;
        c.a = a + z.a;
        c.b = b + z.b;
        return c;
    }

    // ��������������һ���µ�Complex����
    Complex myMinus(const Complex& z) {
        Complex c;
        c.a = a - z.a;
        c.b = b - z.b;
        return c;
    }

    // ��ʾ�𰸵ĺ��������ڴ�ӡ����
    void showAnswer() const {
        if (b == 0)
            std::cout << a << std::endl;
        else if (a == 0) {
            std::cout << b << "i" << std::endl;
        }
        else {
            std::cout << a;
            if (b > 0) std::cout << "+";
            std::cout << b << "i" << std::endl;
        }
    }
private:
    // ʵ�����鲿��������������
    int a, b;
};
int  main13()
{
    Complex  c1(1, 2), c2(3, 4), c3, c4(3, 6), c5(3, 2);
    cout << "c1:  ";
    c1.showAnswer();
    cout << "c2:  ";
    c2.showAnswer();
    c3 = c1.myAdd(c2);
    cout << "c1+c2:  ";
    c3.showAnswer();
    c3 = c1.myMinus(c2);
    cout << "c1-c2:  ";
    c3.showAnswer();
    c3 = c2.myMinus(c2);
    cout << "c2-c2:  ";
    c3.showAnswer();
    cout << "c4:  ";
    c4.showAnswer();
    c3 = c2.myMinus(c4);
    cout << "c2-c4:  ";
    c3.showAnswer();
    cout << "c5:  ";
    c5.showAnswer();
    c3 = c1.myMinus(c5);
    cout << "c1-c5:  ";
    c3.showAnswer();
    return  0;
}
