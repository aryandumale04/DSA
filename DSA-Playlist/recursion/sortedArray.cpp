#include<iostream>
using namespace std;


bool isSorted(int arr[],int size){

    //base case 
    if(size==1 || size==0){
        return true;
    }
    else{
        if(arr[0]>arr[1]){
            return false;
        }
        else{
             int ans=isSorted(arr+1,size-1);
             return ans;

        }
    }

}
int main(){

    int arr[6]={2,3,9,9,9,9};
    int size=6;
    bool ans = isSorted(arr,size);
    if(ans){
        cout<<"Array is sorted"<<endl;

    }
    else{
        cout<<"Array is not sorted "<<endl;
    }
    return 0;






}