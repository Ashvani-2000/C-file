// sum of arrays elements
#include <iostream>
using namespace std;
int main()
{
    int A[4] = {2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum = sum + A[i];
    }
    cout << sum << endl;
    return 0;
}