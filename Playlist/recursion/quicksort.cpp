#include<iostream>
using namespace std;

int  partition(int arr[],int s,int e){


    int a=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if (arr[i]<a){
            count++;
        }
    }
    int pivotindex=s+count;
    swap(arr[s],arr[pivotindex]);

    int i=s;
    int j=e;


    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=arr[pivotindex]){
            i++;
        }
        while(arr[j]>=arr[pivotindex]){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotindex;




}


void quickSort(int arr[],int s,int e ){
        //base case
        if(s>=e){


            return ;
        }
        else{

                int p=partition(arr,s,e);

                //solving left part 
                quickSort(arr,s,p-1);


                //solving right part
                quickSort(arr,p+1,e);





        }





}
int main(){

    int arr[8]={3,7,6,8,29,0,2,78};
    int n=8;
    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}