/*Program to show the concept of run time polymorphism using virtual function.*/

#include <iostream>
using namespace std;

class Car // Declaration of Base class
{
public:
    virtual void feature() // Usage of virtual constructor
    {
        cout << "Price of your Car ";
    }
};

class Audi : public Car // Declaration of Derived class
{
public:
    void feature()
    {
        cout << "This is a Audi A4.\n";
        cout << "It's price is 45 lakh.\n";
    }
};
class BMW : public Car // Declaration of 2nd derived class
{
public:
    void feature()
    {
        cout << "This is a BMW 3 Series.\n";
        cout << "It's price is 47 lakh\n";
    }
};

int main()
{

    // base class pointer
    Car *C;
    Audi a;

    // initilization of reference variable
    C = &a;

    // calling of audi function
    C->feature();

    BMW b;

    // initilization of reference variable
    C = &b;

    // calling of BMW function
    C->feature();

    return 0;
}