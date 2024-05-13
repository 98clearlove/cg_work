#include <iostream>
#include <string>
using namespace std;

// 基类 Worker
class Worker {
protected:
    string name;
    string address;
    long int salary;

public:
    Worker(string n, string a, long int s) : name(n), address(a), salary(s) {}

    // 输出函数
    void printInfo() {
        cout << "name:" << name << ",address:" << address << ",salary:" << salary << endl;
    }

    // 计算工资的虚函数，用于多态
    virtual long int getSalary() {
        return salary;
    }
};

// 派生类 AWorker
class AWorker : public Worker {
public:
    AWorker(string n, string a, long int s) : Worker(n, a, s) {}
};

// 派生类 BWorker
class BWorker : public Worker {
private:
    long int totalNumbers;
    long int every;

public:
    BWorker(string n, string a, long int tn, long int e) : Worker(n, a, 0), totalNumbers(tn), every(e) {
        salary = getSalary();
    }

    long int getSalary() {
        return totalNumbers * every;
    }
};

// 派生类 CWorker
class CWorker : public Worker {
private:
    long int totalHours;
    long int every;

public:
    CWorker(string n, string a, long int th, long int e) : Worker(n, a, 0), totalHours(th), every(e) {
        salary = getSalary();
    }

    long int getSalary() {
        return totalHours * every;
    }
};

int main29() {
    string name1, address1;
    string name2, address2;
    string name3, address3;
    long int salary, totalNumbers, every1, every2, totalHours;

    // 输入固定工资工人
    cin >> name1 >> address1 >> salary;
    cin >> name2 >> address2 >> totalNumbers >> every1;
    cin >> name3 >> address3 >> totalHours >> every2;
    
    

    // 输入计件工人
    AWorker aWorker(name1, address1, salary);
    BWorker bWorker(name2, address2, totalNumbers, every1);
    CWorker cWorker(name3, address3, totalHours, every2);
    Worker* p;
    p = &aWorker;
    p->printInfo();
    p = &bWorker;
    p->printInfo();
    p = &cWorker;
    p->printInfo();

    return 0;
}
