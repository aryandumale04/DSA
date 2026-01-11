#include<iostream>
using namespace std;
int main()
{
    int i;
    cin>>i;
    int row=1;
    while(row<=i){
        int col=1;
        while(col<=row){
            char ch='A'+row-1;
            cout<<ch<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}