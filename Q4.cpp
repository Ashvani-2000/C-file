// for each loop in arrray intoducing in c++11 version
#include <iostream>
using namespace std;
int main()
{
    float A[] = {5.6f, 5, 7.8f, 9, 11.2};
    for (auto X : A)
        cout << X << endl;

    return 0;
}