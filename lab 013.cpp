/*Program to show multilevel inhertitance*/
#include <iostream>
using namespace std;
class RBI
{
public:
    RBI()
    {
        cout << " Reserve Bank of India " << endl;
    }
};
class SBI : public RBI
{
public:
    SBI()
    {
        cout << " State Bank of India " << endl;
    }
};
class SBImini : public SBI
{
public:
    SBImini()
    {
        cout << " State Bank of India (mini branch) " << endl;
    }
};
int main(int argc, char const *argv[])
{

    SBImini minibank;

    return 0;
}
