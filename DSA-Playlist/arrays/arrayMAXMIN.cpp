#include<iostream>
#include<climits>
using namespace std;
int getMax(int arr[],int n){
    int maximum=INT_MIN;//max min me inverse ka relationn hota hai,requires header file<climits>
    for(int i=0;i<n;i++){
         maximum=max(maximum,arr[i]);
         //ye function niche jo 3 line hai wohi kaam karra

        // if (arr[i]>max){
        //     max=arr[i];
       

        // }
        

    }
    return maximum;


}
int getMin(int arr[],int n){
    int mini=INT_MAX;//max min me inverse ka relationn hota hai,requires header file<climits>
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
        // if (arr[i]<min){
        //     min=arr[i];


        }
        
         return mini;

    }
   



int main()
{

    int size;
    cin>>size;
    int num[100];//GHATIYA PRACTICE kabhi bhi aese varaible pass nahi karna
    //GOOD INT A[100000000]
    //inputing elements in an array
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"Maximum value is : "<<getMax(num,size)<<endl;
    cout<<"Minimum value is : "<<getMin(num,size)<<endl;








    return 0;
    
} 

