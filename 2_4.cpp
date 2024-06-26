#include  <iostream>
using  namespace  std;
class  vehicle
{
protected:
    double  speed;        //速度,公里/小时
    int  wheels;          //轮子数
    double  weight;  //重量
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
    double  rated_load;      //额定载重
public:
    truck(double  speed = 80, int  wheels = 4, double  weight = 2500, double  rated_load = 3000);
    virtual    void  show(void);
};

class  boat : public  vehicle
{
    char  kind;              //轮船类别，如客轮为'k'
public:
    boat(double  speed = 30, int  wheels = 0, double  weight = 12000, char  kind = 'k');
    virtual    void  show(void);
};
// 基类vehicle的实现
vehicle::vehicle(double speed, int wheels, double weight)
    : speed(speed), wheels(wheels), weight(weight) {}


// 派生类car的实现
car::car(double speed, int wheels, double weight, int passenger_load)
    : vehicle(speed, wheels, weight), passenger_load(passenger_load) {}


// 派生类truck的实现
truck::truck(double speed, int wheels, double weight, double rated_load)
    : vehicle(speed, wheels, weight), rated_load(rated_load) {}

void truck::show(void) {
    cout << "Truck message\n";
    cout << speed << " " << wheels << " " << weight << " " << rated_load << endl;
}

// 派生类boat的实现
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