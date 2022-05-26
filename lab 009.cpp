/*Write a program to create an abstract clas named Shape that contains an empty method named number
of sides(). Provide three classes named Trapezoid, Triangle and Hexagon such that each one if the
classes inherits the class Shape. Each one of the classes contains only the method number of sides()
that shows the number of sides in the given geometrical figures.*/
#include <iostream>
using namespace std;
class Shape
{
protected:
    int side;

public:
    virtual void numberOfSides() = 0;
};
class Trapezoid : public Shape
{
public:
    Trapezoid(int side)
    {
        this->side = side;
    };

    void numberOfSides()
    {
        cout << "The Number of Sides in Trapezoid is :" << side << endl;
    };
};

class Triangle : public Shape
{
public:
    Triangle(int side)
    {
        this->side = side;
    }
    void numberOfSides()
    {
        cout << "The Number of Sides in Triangle is : " << side << endl;
    };
};
class Hexagone : public Shape
{
public:
    Hexagone(int side)
    {
        this->side = side;
    }
    void numberOfSides()
    {
        cout << "The Number of Sides in Hexagone is :" << side << endl;
    };
};

int main(int argc, char const *argv[])
{

    Trapezoid trap(4);
    Triangle tri(3);
    Hexagone hexa(6);

    trap.numberOfSides();
    tri.numberOfSides();
    hexa.numberOfSides();
    return 0;
}
