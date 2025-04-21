// Program to Multiply Matrices
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10];
    int r1, c1, r2, c2;

    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Matrices can't be multiplied (columns of first != rows of second)." << endl;
        return 0;
    }

    // Input elements of the first matrix
    cout << "\nEnter elements of matrix 1:" << endl;
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    // Input elements of the second matrix
    cout << "\nEnter elements of matrix 2:" << endl;
    for (int i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << ": ";
            cin >> b[i][j];
        }
    }

    // Initializing result matrix elements to 0
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            mult[i][j] = 0;

    // Matrix multiplication
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            for (int k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Displaying the result
    cout << "\nResultant Matrix:\n";
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            cout << mult[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
