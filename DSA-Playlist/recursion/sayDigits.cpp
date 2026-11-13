#include<iostream>
using namespace std;
void say(int k,string arr[]){
    //base case 
    if(k==0){
        return;
    }
    //Recursive case

    int digit=k%10;
     k=k/10;
    say(k,arr);

    //processing
    cout<<arr[digit]<<" ";
}
int main(){
     int n;
     cin>>n;
        string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

     say(n,arr);
     return 0;
}