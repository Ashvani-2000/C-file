//user take input for each loop
#include<iostream>
using namespace std;
int main()
{
    int A[2][3];
    cout<<"Enter input:";
    for(auto& x:A){
        for(auto& y:x)
        {
            cin>>y;
        }
        cout<<endl;
    }
    for(auto& x:A){
        for(auto& y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}