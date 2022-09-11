#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    string name;
    int weight;
    Animal(){};
    Animal(string nam, int wei)
    {
        name = nam;
        weight = wei;
    };
};
class Pet
{
public:
    Animal cat;
    void petHelth()
    {
        cout << "Enter the Name of the pet " << endl;
        getline(cin, cat.name);
        cout << "Enter the weight of pet " << endl;
        cin >> cat.weight;
    };
    void Display()
    {
        cout << "Name of the Pet is  " << cat.name << endl;
        cout << "The weight of the pet is  " << cat.weight << endl;
    };
};
int main(int argc, char const *argv[])
{
    Pet mypet;
    mypet.petHelth();
    mypet.Display();

    return 0;
}
