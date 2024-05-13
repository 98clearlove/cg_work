#include  <iostream>
#include  <cmath>
using  namespace  std;
class myVector {
public:
    myVector(int x, int y, int z) :x(x), y(y), z(z) {}
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    int getZ() {
        return z;
    }
    float getLength() {
        return sqrt(x * x + y * y + z * z);
    }
private:
    int x, y, z;
};
int  main11()
{
    myVector  v1(1, 2, 3), v2(10, 12, 15), v3(2, 4, 4);
    cout << "Vector  v1:  (" << v1.getX() << ",  " << v1.getY() << ",  " << v1.getZ() << ")" << endl;
    cout << "Length  of  v1:  " << v1.getLength() << endl;
    cout << "Vector  v2:  (" << v2.getX() << ",  " << v2.getY() << ",  " << v2.getZ() << ")" << endl;
    cout << "Length  of  v2:  " << v2.getLength() << endl;
    cout << "Vector  v3:  (" << v3.getX() << ",  " << v3.getY() << ",  " << v3.getZ() << ")" << endl;
    cout << "Length  of  v3:  " << v3.getLength() << endl;
    return  0;
}