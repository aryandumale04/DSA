#include<iostream>
using namespace std;
void selectionSort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;


    }
    else{
        //ek baar solve karlo
        int smallestIndex=s;
        for(int i=s+1;i<=e;i++){
            if(arr[i]<arr[smallestIndex]){
                smallestIndex=i;

                
                }
            
        }
        swap(arr[smallestIndex],arr[s]);
            
        //baki recursion dekh lega
        selectionSort(arr,s+1,e);
    }
}
int main(){
    int arr[5]={3,7,2,1,6};
    int n=5;
    selectionSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}