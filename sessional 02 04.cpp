#include <iostream>
using namespace std;
class Time2;
class Time1
{
private:
    int hours;
    int minutes;

public:
    Time1() {}
    Time1(int hr, int min)
    {
        hours = hr;
        minutes = min;
    }
    int getMin1() { return minutes; }
    int gethour1() { return hours; }
    Time1(Time2 &obj);
    void display()
    {
        cout << "Time in t1 is:: Hour: " << hours << "   Minutes: " << minutes << endl;
    }
};

class Time2
{
private:
    int minutes2;

public:
    Time2() {}
    Time2(int min)
    {
        minutes2 = min;
    };
    int getMin2() { return minutes2; }
    Time2(Time1 &obb)
    {
        minutes2 = obb.gethour1() * 60 + obb.getMin1();
    }
    void display()
    {
        cout << "Time in t2 is:: Minutes: " << minutes2 << endl;
    }
};
Time1::Time1(Time2 &obj)
{
    hours = obj.getMin2() / 60;
    minutes = obj.getMin2() % 60;
}

int main(int argc, char const *argv[])
{
    Time1 t1(2, 40);
    Time2 t2;
    t2 = t1;
    t1.display();
    t2.display();
    Time1 t3;
    Time2 t4(40);
    t3 = t4;
    return 0;
}
