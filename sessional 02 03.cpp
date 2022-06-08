#include <iostream>
using namespace std;
class Time2;
class Time1
{
private:
public:
    int hours;
    int minutes;
    Time1() {}
    Time1(int hr, int min)
    {
        hours = hr;
        minutes = min;
    }
    void display()
    {
        cout << "Time in t1 is:: Hour: " << hours << "   Minutes: " << minutes << endl;
    }
};
class Time2
{
private:
public:
    int minutes2;
    Time2() {}
    Time2(int min)
    {
        minutes2 = min;
    };
    Time2(Time1 &obb)
    {
        minutes2 = obb.hours * 60 + obb.minutes;
    }
    void display()
    {
        cout << "Time in t2 is:: Minutes: " << minutes2 << endl;
    }
};

int main(int argc, char const *argv[])
{
    Time1 t1(2, 40);
    Time2 t2;
    t2 = t1;
    t1.display();
    t2.display();
    return 0;
}
