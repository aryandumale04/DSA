#include<iostream>
using namespace std;
void printarrayhg(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void swapalternate(int arr[],int n){
    for(int i=0;i<n;i=i+2){
        if (i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int evena[8]={5,2,9,4,7,6,1,0};
    int odda[5]={11,33,9,76,43};
    swapalternate(evena,8);
    printarrayhg(evena,8);
     swapalternate(odda,5);
    printarrayhg(odda,5);
    return 0;


}