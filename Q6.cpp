// find max element in a array
#include <iostream>
using namespace std;
int main()
{
    int A[7] = {4, 2, 5, 6, 8, 1, 9};
    int n = 7, max = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << "maximum element:" << max;
    return 0;
}