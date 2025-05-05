#include<iostream>
using namespace std;
// int Counting(int n){//return karne ki jarurat nhi ,sidha print kar raha hai so use void
//     int i=1;
//     while(i<n){
//         cout<<i<<endl;
//         i++;
//     }
//     return i;
// }
//using for loop
void count(int n){
    for (int i=1;i<=n;i++){
        cout<<i<<" ";
//sirf return keyword use kar sakte hain
    }
}
int main(){
    int n;
    cin>>n;
    count(n);
    return 0;
}