#include<iostream>
#include<climits>
using namespace std;
// bool isPresent( int arr[] [4],int target,int row,int col){
//         for(int i=0;i<3;i++){
//             for(int j=0;j<4;j++){
//                 if (arr[i][j]==target){
//                     return 1;
//                 }
//             }
//         }
//         return 0;
// } 
void rowsum( int arr[][4] ,int i,int j){
    cout<<"Printing sum "<<endl;
        for(int i=0;i<3;i++){
            int sum=0;
            for(int j=0;j<4;j++){
                sum+=arr[i][j];
             }
            cout<<sum<<" ";
        }   //takes input row wise
}
void column(int arr[][4],int i,int j){
    cout<<endl<<"Printing sum of columns : ";
        for(int j=0;j<4;j++){
            int sum=0;
            for(int i=0;i<3;i++){
                sum+=arr[i][j]; 

             }

            cout<<sum<<" ";
        } 

}
int  largestrowsum(int arr [][4],int i,int j){
    int maxi=INT_MIN;
    int num=-1;
        for(int i=0;i<3;i++){
            int sum=0;
            for(int j=0;j<4;j++){
                sum+=arr[i][j];
             }
            if(sum>maxi){
                maxi=sum;
                num=i;
            }
        }
        cout<<endl<<"Maximunn sum is :  "<<maxi;
        return num; //takes input row wise

}
int main(){
    int arr[3][4];
    cout<<"Enter the array elements - ";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }//takes input row wise


    // //column wise input
    // int arr[3][4];
    // for(int i=0;i<4;i++){//because i<4
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }



//UPAR WALA ROW
// NICHE WALA LOOP FOR COLUMN(andar wala) 
    cout<<endl;
    //     for(int i=0;i<3;i++){
    //         for(int j=0;j<4;j++){
    //             cout<<arr[i][j]<<" ";
    //         }//rowise print
    //         cout<<endl;
    // }
        cout<<endl<<"The array is - "<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }//rowise print
            cout<<endl;
    }

    // int target;
    // cout<<endl<<"Enter the element to be searched : ";
    // cin>>target;
    // if(isPresent(arr,target,3,4)){
    //     cout<<endl<<"Element Found";
    // }
    // else{
    //     cout<<"Element not found";
    // }
    rowsum(arr,3,4);
    column(arr,3,4);
    int ans=largestrowsum(arr,3,4);
    cout<<endl<<"Max row is at index "<<ans;


    return 0;
}