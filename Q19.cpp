// Accessing Array Elements using Pointers
#include <iostream>
using namespace std;
int main()
{
    int num[] = {24, 34, 12, 44, 56, 17};
    ;
    int i, *ptr;
    ptr = &num[0];
    for (i = 0; i <= 5; i++)
    {
        cout << "address = " << ptr << " element = " << *ptr << endl;
        ptr++;
    }
    return 0;
}