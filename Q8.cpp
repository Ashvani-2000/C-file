// Binary search
#include <iostream>
using namespace std;
int main()
{
    int mid, key, l = 0, h = 4;
    int A[5] = {1, 2, 3, 4, 5};
    cout << "Enter key:";
    cin >> key;
    while (l <= h)
    {
        mid = (h + l) / 2;
        if (key == A[mid])
        {
            cout << "Element found at index:" << mid << endl;
            return 0;
        }

        else if (key < A[mid])
        {
            h = mid - 1;
        }

        else
        {
            l = mid + 1;
        }
    }
    cout << "Element not found";

    return 0;
}