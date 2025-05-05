#include<iostream>
using namespace std;
bool Search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++){
       if(arr[i]==key){
        return 1;// similar to break ,ek bar element mil gaya toh aagein traverse nhi hoga
    }
    }
    return 0;
    
       }
        
   
int main(){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    int key ;
    cout<<"Enter the key : ";
    cin>>key;
   bool found =  Search(arr,10,key);
    if(found){
        cout<<"Key is present "<<endl;
    }
    else{
        cout<<"Key is absent "<<endl;
    }
    //whether 1 is presentv  in array or not
    return 0;
}