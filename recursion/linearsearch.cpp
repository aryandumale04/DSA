#include<iostream>
using namespace std;
bool lsea(int arr[],int size,int key){
    //base case 
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool ans=lsea(arr+1,size-1,key);
        return ans;
    }
}
int main(){

    int arr[5]={2,5,7,3,8};
    int size=5;
    //recursive function to check whether key is present in a key or not
    bool ans = lsea(arr,size,1);
    if(ans){
        cout<<"Key is present in the array"<<endl;

    }
    else{
        cout<<"Key is not present in the array"<<endl;
    }
    
}