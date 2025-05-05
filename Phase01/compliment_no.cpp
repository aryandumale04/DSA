#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=n;
    int mask=0;
    int ans =0;
    if(m==0){
        ans=1;
    }
    else{
         while(m!=0)
    {
        mask=(mask<<1) | 1;
        m=m>>1;
    }
    ans= (~n)&mask;

    }
   
    
    cout<<ans<<endl;

}