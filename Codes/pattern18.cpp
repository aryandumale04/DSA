#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row =1;
    while(row<=n){
        //space
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        //t1
        int j=1;
        while(j<=row){
            cout<<j<<" ";
            j=j+1;
        }
        //t2
        int col=row-1;
        while(col){
            cout<<col<<" ";
            col=col-1;
        }
        cout<<endl;
        row=row+1;


    }
}