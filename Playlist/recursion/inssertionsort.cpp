#include<iostream>
using namespace std;

void insertionSort( int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];//isko uski appropriate position pe dalna hai
        int j=i-1;//last element of sorted part
        for(;j>=0;j--){//jabtak sorted array exist
                if(arr[j]>temp){
                    //right shift
                    arr[j+1]=arr[j];
                }
                else{
                    //aagein nhi jana isleye break;
                    break;                
                }

        }
        arr[j+1]=temp;
    }


}
int main(){

    int arr[5]={3,7,1,2,6};
    int n=5;
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}