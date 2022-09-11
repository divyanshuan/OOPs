/* Program to create 2d matrix of size m X n*/
#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int m, n;
    cout << "Enter the number of row of matrix " << endl;
    cin >> m;
    cout << "Enter the number of  column of th the matrix " << endl;
    cin >> n;
    int matrix[m][n];
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "Enter the element of row " << i << "and column" << j << endl;
            cin >> matrix[i][j];
        }
    }
    cout << "Printing the matrix " << endl;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << matrix[i][j] << "   ";
        }
        cout << " " << endl;
    }
    return 0;
}
