#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;



    int mainArrayIndex=s;

    int *first=new int[len1];
    int *Second=new int [len2];
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];

    }
    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        Second[i]=arr[mainArrayIndex++];
        
    }



    int index1=0;
    int index2=0;
    mainArrayIndex=s;


    
    while(index1<len1 && index2 <len2){
        if(first[index1]<Second[index2]){
            arr[mainArrayIndex++]=first[index1++];

        }
        else{
            arr[mainArrayIndex++]=Second[index2++];

        }
        

    }
      // Copy any remaining elements
    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2 < len2) {
        arr[mainArrayIndex++] = Second[index2++];
    }

    // Free the dynamically allocated memory
    delete []first;
    delete []Second;



}
void mergesort(int arr[],int s,int e){




    //base case
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);

}
int main(){
    int arr[5]={3,1,7,2,4};
    int n=5;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
