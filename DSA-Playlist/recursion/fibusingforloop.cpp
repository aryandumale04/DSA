#include<iostream>
using namespace std;
int fib(int n){
    if(n<=0){
        return -1;
    }
    else if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        int a =0;
        int b =1;
        int ans=0;
        for(int i=3;i<=n;i++){
            ans=a+b;
            a=b;
            b=ans;
        }
        return ans;
    }

}
int main() {
    int n;
    cin>>n;
    int ans =fib(n);
    cout<<"The "<<n<<"th term of the FIBONACI SERIES is  : "<<ans;





    return 0;
}