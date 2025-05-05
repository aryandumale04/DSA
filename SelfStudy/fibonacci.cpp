#include<iostream>
using namespace std;
void Fibonaci(int n){

    if(n<=0){
        return ;
    }
    else{
        long long a=0;
        long long b=1;
        cout<< a << " ";
        long long  next=0;
        
        for(int i =1;i<n;i++){
            cout << b <<" ";
            next=a+b;
            
            a=b;
            b=next;

        }
    }


}
int main(){
    int n;
    cout<<"Fibonacci Series Program"<<endl;
    cout<<"Enter the terms in fibonacci series : ";

    cin>>n;

    Fibonaci(n);
   





    

    
}