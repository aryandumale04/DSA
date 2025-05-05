#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter the value of N : ";
    cin>>n;
   
//    int sum=0;
//    for(int i=1;i<=n;i++)
//    {
//     sum=sum+i;

//    }
//    cout<<"Sum = "<<sum<<endl;
//
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++)
    {
         int nextfib=a+b;
        cout<<nextfib<<" ";
        a=b;
        b=nextfib;//start 2 + aur 2 print karega ye 
    }
}