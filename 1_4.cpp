#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    Student(string id,string name,int score):id(id),name(name),score(score){
        classSize++;
        totalScore += score;
    }
    static int classSize;
    static int totalScore;
    static double getAverage() {
        return (double)totalScore / classSize;
    }
    static int getNum() {
        return classSize;
    }
private:
    string id, name;
    int score;
};
int Student::classSize = 0;
int Student::totalScore = 0;

int  main14()
{
    string  id, name;
    int  score;
    cout << "Please  input  the  information  of  a  student:  (id,  name  and  score).  Press  Ctrl+Z  to  stop." << endl;
    while (cin >> id >> name >> score) {
        Student  stu(id, name, score);
    }
    cout << Student::getNum() << "  " << Student::getAverage() << endl;
    return  0;
}