#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}

void reverse(int arr[],int size){
    int start =0;
    int end=size-1;
    while(start<=end){//termination condition for both odd and even array
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
int main(){
    int arr[6]={1,4,0,5,-2,15};
    int arr2[5]={2,6,3,9,4};
    reverse(arr,6);
    reverse(arr2,5);
    printarr(arr,6);
    printarr(arr2,5);
    return 0;
}