/*Program to show multiple inheritance*/
#include <iostream>
using namespace std;
class Mammal
{
public:
    Mammal()
    {
        cout << "I am Mammal  " << endl;
    };
};
class Bird
{
public:
    Bird()
    {
        cout << "I am Bird  " << endl;
    }
};
class Bat : public Bird, public Mammal
{
public:
    Bat()
    {
        cout << "I am Bat " << endl;
    };
};

int main(int argc, char const *argv[])
{
    Bat b1;

    return 0;
}
