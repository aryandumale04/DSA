#include<iostream>
using namespace std;
void sortArray(int arr[],int size){
    //base case 
    if(size==0|| size==1){
        return;

    }
    else{
        for(int i=0;i<size-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }

        }
        sortArray(arr,size-1);
    }
    
}
int main(){

    int arr[5]={3,1,5,6,2};
    sortArray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}