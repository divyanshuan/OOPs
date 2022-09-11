/* program  to make inline function */
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
inline int Add(int a, int b)
{
    return (a + b);
}
int main(int argc, char const *argv[])
{
    int x, y, k;
    cout << "Enter the number for sum " << endl;
    cout << "Enter the first number " << endl;
    cin >> x;
    cout << "Enter the second number " << endl;
    cin >> y;
    k = Add(x, y);
    cout << "the sum is  " << k << endl;
    
    return 0;
}
