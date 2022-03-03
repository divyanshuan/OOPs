/*Program to find out power and also have default value*/
#include <iostream>
using namespace std;

class power
{
private:
    double ans;

public:
    double pow(double a, int b)
    {
        ans = 1;
        for (int i = 0; i < b; i++)
        {
            ans = ans * a;
        }
        return ans;
    }
    double pow(double a, int b =2) // default value  
    {
        int b = 2;
        ans = 1;
        for (int i = 0; i < b; i++)
        {
            ans = ans * a;
        }
        return ans;
    }
    void display()
    {
        cout << ans << endl;
    }
};
int main(int argc, char const *argv[])
{
    power math;
    double x, z;
    int y;
    cout << "enter the base number" << endl;
    cin >> x;
    cout << "enter the power " << endl;
    cin >> y;
    z = math.pow(x, y);
    math.display();

    return 0;
}
