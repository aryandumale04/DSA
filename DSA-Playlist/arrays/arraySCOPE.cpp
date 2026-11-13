#include<iostream>
using namespace std;
void update(int arr[],int size){
    cout<<"Inside the function"<<endl;
    //updating first element of array
    arr[0]=120;
      for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;



    cout<<"Going back to mail";

}
int main(){
    int arr[3]={1,2,3};
    update(arr,3);
    cout<<endl<<"Printing in main Function "<<endl;
        for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
    return 0;
}