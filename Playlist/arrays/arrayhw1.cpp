#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,5,7,9,1};
    int sum =0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];


    }
    cout<<"The sum of all elements of an array is : "<<sum;
}