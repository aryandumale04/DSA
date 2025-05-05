#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int count= 0;
    while(number!=0){
        if(number&1){
            count++;

        }
        number = number>>1;
    }
    cout<<"Hamming weight = "<<count;
    
}