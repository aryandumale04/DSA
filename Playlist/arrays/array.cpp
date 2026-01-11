#include<iostream>
using namespace std;
void printarray(int array[],int size ){
    cout<<"Printing the array : "<<endl;
    for (int i=0;i<size;i++){//jab bhi dealing with an array always initialise i to 0 as index concept is involved
        cout<<array[i]<<" ";
     }
     cout<<"\nPrinting the array  Done: "<<endl;
}
int main(){
    int number[15];
    //accessing an array
    // cout<<"Value at index 020:"<<number[35]<<endl;

    //Initialising an Array
    int second[3]={5,7,11}; 
     cout<<"Value at index 2 is : "<<second[2]<<endl;
    //  printarray(second,3);
     int third[15]={2,7};
    //  printarray(third,15);
     int SIiZE=(sizeof(third))/sizeof(int);
       cout<<"Size of Fifth is : "<<SIiZE;
     //initialising all elements of array to zero
     int fourth[15]={0};
    //  printarray(fourth,15);



     //Initialising all elements of arrays by single value (other than 0) cannot be done by below code 

       int fifth[15]={4};
    //    printarray(fifth,15);
       int SIZE=(sizeof(fifth))/sizeof(int);
       cout<<"Size of Fifth is : "<<SIZE;

       char ch[5]={'a','b','c','r','p'};
       cout<<ch[3];
       cout<<"Printing the array : "<<endl;
    for (int i=0;i<5;i++){
        cout<<ch[i]<<" ";
     }
     double firstD[5];
     float firstf[6];
     bool firstb[9];

     //Printing and Array
     int n =15;
    

    cout<<"\nEverything is fine ";

    return 0;
}