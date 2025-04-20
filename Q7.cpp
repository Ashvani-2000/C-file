// Linear search
#include <iostream>
using namespace std;
int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int i, key;
    cout << "Enter key element:" << endl;
    cin >> key;
    for (i = 0; i < 10; i++)
    {
        if (key == A[i])
        {
            cout << "key element at index:" << i;
            return 0;
        }
    }
    cout << "key element Not found in array";
}
