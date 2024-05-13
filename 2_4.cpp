#include  <iostream>
using  namespace  std;
class  vehicle
{
protected:
    double  speed;        //�ٶ�,����/Сʱ
    int  wheels;          //������
    double  weight;  //����
public:
    vehicle(double  speed = 80, int  wheels = 4, double  weight = 1000);
    virtual  void  show(void) = 0;
};

class  car : public  vehicle
{
    int  passenger_load;
public:
    car(double  speed = 80, int  wheels = 4, double  weight = 1000, int  passenger_load = 4);
    virtual  void  show(void);
};

void  car::show(void)
{
    cout << "Car  message\n";
    cout << speed << "  " << wheels << "  " << weight << "  " << passenger_load << endl;
}
class  truck : public  vehicle
{
    double  rated_load;      //�����
public:
    truck(double  speed = 80, int  wheels = 4, double  weight = 2500, double  rated_load = 3000);
    virtual    void  show(void);
};

class  boat : public  vehicle
{
    char  kind;              //�ִ���������Ϊ'k'
public:
    boat(double  speed = 30, int  wheels = 0, double  weight = 12000, char  kind = 'k');
    virtual    void  show(void);
};
// ����vehicle��ʵ��
vehicle::vehicle(double speed, int wheels, double weight)
    : speed(speed), wheels(wheels), weight(weight) {}


// ������car��ʵ��
car::car(double speed, int wheels, double weight, int passenger_load)
    : vehicle(speed, wheels, weight), passenger_load(passenger_load) {}


// ������truck��ʵ��
truck::truck(double speed, int wheels, double weight, double rated_load)
    : vehicle(speed, wheels, weight), rated_load(rated_load) {}

void truck::show(void) {
    cout << "Truck message\n";
    cout << speed << " " << wheels << " " << weight << " " << rated_load << endl;
}

// ������boat��ʵ��
boat::boat(double speed, int wheels, double weight, char kind)
    : vehicle(speed, wheels, weight), kind(kind) {}

void boat::show(void) {
    cout << "Boat message\n";
    cout << speed << " " << wheels << " " << weight << " " << kind << endl;
}
int  main24()
{
    vehicle* unicycle;    car* BMW;
    unicycle = new  car;      unicycle->show();
    BMW = (car*)unicycle;      BMW->show();
    delete  unicycle;
    unicycle = new  truck;      unicycle->show();
    delete  unicycle;
    unicycle = new  boat;      unicycle->show();
    delete  unicycle;
    int a = 3;
    int b = 4;
    cout << (a > b ? "YES!" : "NO");
    return  0;
}