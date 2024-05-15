#include <iostream>
#include <iomanip>
using namespace std;
template <typename T>
class myArrayList
{
private:
    int mSize;
    int mLen;
    T* mpArr;
public:
    myArrayList(int n);
    myArrayList(T* a, int n);
    void show();
    T getMax();
    void sort();
    //*************************
    myArrayList(const myArrayList<T>& other);
};
//*****************************
template<typename T>
void myArrayList<T>::sort() {
    for (int i = 0; i < mLen - 1; i++) {
        for (int j = i + 1; j < mLen; j++) {
            if (mpArr[i] > mpArr[j]) {
                T temp = mpArr[i];
                mpArr[i] = mpArr[j];
                mpArr[j] = temp;
            }
        }
    }
}
template<typename T>
myArrayList<T>::myArrayList(T* a, int n) {
    this->mSize = n; // 设置数组列表的最大容量
    this->mLen = n; // 设置数组列表的当前长度
    this->mpArr = new T[mSize]; // 分配新的数组
    for (int i = 0; i < n; i++) {
        this->mpArr[i] = a[i]; // 从给定数组复制元素到数组列表
    }
}

template<typename T>
myArrayList<T>::myArrayList(const myArrayList<T>& other)

{

    this->mLen = other.mLen;

    this->mSize = other.mSize;

    this->mpArr = new T[this->mLen];

    for (int i = 0; i < this->mLen; i++)

        this->mpArr[i] = other.mpArr[i];

}

template<typename T>

myArrayList<T>::myArrayList(int n)

{

    this->mSize = n;

    this->mLen = 0;

    this->mpArr = new T[mSize];

}
//*************************************

template <typename T>

void myArrayList<T>::show()

{

    for (int i = 0; i < mLen; i++)

        cout << mpArr[i] << "   ";//三个空格

    cout << endl;

}

template <typename T>
T myArrayList<T>::getMax()
{
    T  max;
    max = mpArr[0];
    for (int i = 1; i < mLen; i++)
        if (max < mpArr[i])
            max = mpArr[i];
    return max;
}



//Student.h

class Student
{
private:
    int mId;
    float height;
    int score;
public:
    Student(int id = 0, float h = 0, int s = 0) :height(h), mId(id), score(s)
    {
    }

    //********************************
    bool operator<(const Student& rhs) const { // 比较函数
        return score < rhs.score; // 假设按照分数排序
    }
    bool operator>(const Student& rhs) const { // 比较函数
        return score > rhs.score; // 假设按照分数排序
    }
    void show() {
        cout << "ID:" << mId << "  Height:" << height << " Score:" << score << endl;
    }
    friend ostream& operator<<(ostream& os, const Student& student) {
        os << "ID:" << student.mId << "  Height:" << student.height << " Score:" << student.score << endl;
        return os;
    }
};
template<class T>
class mcla {
public:
    void sort();
private:
    T* arry;
    int len;
    int size;
};


//主程序

int maint()
{
    int a[] = { 1, 2, 3, 5, 7, 9, 12, 8 };
    double  b[] = { 1, 2.5, 3.6, 5, 7, 9, 12.8, 8 };
    myArrayList <int> list1(a, 8);
    list1.sort();
    list1.show();
    cout << "max=" << list1.getMax() << endl;
    myArrayList <double> list2(b, 8);
    list2.sort();
    list2.show();
    cout << "max=" << list2.getMax() << endl;
    Student s[3] = { Student(1, 175, 80), Student(2, 178, 90), Student(3, 195, 83) };
    myArrayList <Student> list3(s, 3);
    list3.sort();
    list3.show();
    cout << "max=" << list3.getMax() << endl;
    cout << (1 ^1);
    return 0;
}



