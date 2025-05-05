#include<iostream>
using namespace std;

bool bsea( int arr[],int start,int end ,int key){
    //base case

    //element not found
    if(start>end){
        return false;
    }
    int mid=(start)+(end-start)/2;
    //element found
    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]<key){
        return  bsea(arr,mid+1,end,key);
    }
    else{
        return bsea(arr,start,mid-1,key);
    }


}
int main(){
    int arr[6]={2,4,6,10,14,16};
    int size=6;
    int key =2;
    int start=0;
    int end=5;

    bool ans=bsea(arr,start,end,key);
    if(ans){
        cout<<"Key is present in the array"<<endl;
    }
    else{
        cout<<"Key is not present in the array"<<endl;
    }
    return 0;
}