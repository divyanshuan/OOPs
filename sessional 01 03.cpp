#include <iostream>
using namespace std;
class Time
{
private:
    int minutes;

public:
    Time() {}
    Time(int min) /*Provide the way to store in minutes */
    {
        minutes = min;
    }
    Time(int hr, int min) /*Provide the way to store in hours and minutes */
    {
        minutes = hr * 60 + min;
    }
    void display()
    {
        cout << "Time in minutes::  " << minutes << endl;
    }
};
int main(int argc, char const *argv[])
{
    Time clock1(29);
    clock1.display();
    Time clock2(1, 44);
    clock2.display();

    return 0;
}
