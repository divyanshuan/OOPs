/*Program to show the concept of hybrid inheritance*/

#include <iostream>
using namespace std;
class University
{
public:
    University()
    {
        cout << "This is Central university of Haryana" << endl;
    }
};
class Depatrtment : public University
{
public:
    Depatrtment()
    {
        cout << "Department of Computer Science and Engineering" << endl;
    }
};
class HOD
{
public:
    HOD()
    {
        cout << "Head of Department of CSE"<<endl;
    }
};
class CSE : public Depatrtment, public HOD
{
public:
    CSE()
    {
        cout << "This is CSE department"<<endl;
    }
};
int main()
{
    CSE manan;
    return 0;
}