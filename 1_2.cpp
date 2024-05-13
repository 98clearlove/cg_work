#include  <iostream>
using  namespace  std;
class Step {
public:
    Step(int* s) {
        for (int i = 0; i < 7; i++) {
            step[i] = *(s + i);
        }
    }
    int getMax() {
        int Max = step[0];
        for (int i = 1; i < 7; i++) {
            if (step[i] > Max)
                Max = step[i];
        }
        return Max;
    }
    int getMin() {
        int Min = step[0];
        for (int i = 1; i < 7; i++) {
            if (step[i] < Min)
                Min = step[i];
        }
        return Min;
    }
    int getAverage() {
        double total = 0;
        for (int i = 0; i < 7; i++) {
            total += step[i];
        }
        double ave = total / 7;
        return ave - int(ave) >= 0.5 ? int(ave) + 1 : int(ave);
    }
private:
    int step[7];
};
int  main12()
{
    int  s[7] = { 5000,2345,  7890,  10000,  8000,9563,  3399 };
    Step  myStep(s);
    cout << "Max  steps:  " << myStep.getMax() << endl;
    cout << "Min  steps:  " << myStep.getMin() << endl;
    cout << "Average  steps:  " << myStep.getAverage() << endl;
    return  0;
}