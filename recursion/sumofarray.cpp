#include<iostream>
using namespace std;
int rec(int arr[],int size){
    //base case 
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    if(size==2){
        return arr[0]+arr[1];
    }
    int ans = arr[0] + arr[1];
    return ans + rec(arr+2,size-2);

}
int main(){
    int arr[5]={3,2,5,1,6};
    int ans = rec(arr,1);
    cout<<ans;
}