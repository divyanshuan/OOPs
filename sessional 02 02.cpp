#include <iostream>
#include <string>
using namespace std;
class University
{
private:
    string name;

public:
    University() {}
    University(string nam)
    {
        name = nam;
    }
    string getname()
    {
        return name;
    }
    void operator*(int n)
    {
        string result;
        for (int i = 0; i < n; i++)
        {
            result.append(name);
        }
        name = result;
    }
    void operator=(string n)
    {
        name = n;
    }
    void display()
    {
        cout << "The output is : " << name << endl;
    }
};
int main(int argc, char const *argv[])
{
    University myuni;
    myuni = "CUH";
    myuni * 3;
    myuni.display();

    return 0;
}
