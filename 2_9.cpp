#include <iostream>
#include <string>
using namespace std;

// ���� Worker
class Worker {
protected:
    string name;
    string address;
    long int salary;

public:
    Worker(string n, string a, long int s) : name(n), address(a), salary(s) {}

    // �������
    void printInfo() {
        cout << "name:" << name << ",address:" << address << ",salary:" << salary << endl;
    }

    // ���㹤�ʵ��麯�������ڶ�̬
    virtual long int getSalary() {
        return salary;
    }
};

// ������ AWorker
class AWorker : public Worker {
public:
    AWorker(string n, string a, long int s) : Worker(n, a, s) {}
};

// ������ BWorker
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

// ������ CWorker
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

    // ����̶����ʹ���
    cin >> name1 >> address1 >> salary;
    cin >> name2 >> address2 >> totalNumbers >> every1;
    cin >> name3 >> address3 >> totalHours >> every2;
    
    

    // ����Ƽ�����
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
