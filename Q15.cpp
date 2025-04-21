//calculate the Average of all elements
#include<iostream>
using namespace std;
int main(){
   int n,i;
   float num[100],sum=0.0,avg;
   cout<<"Enter the number of element:";
   cin>>n;
   for(int i = 0; i < n;++i)
   {
    cout<<"Enter "<<i+1<<" number:";
    cin>>num[i];
    sum+=num[i];
   }
   avg=sum/n;
   cout<<"Avg = "<<avg;
   return 0;
}
