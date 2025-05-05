#include<iostream>
using namespace std;
void rev(string &str,int i){
    //base case
    int n=str.length(); 
    if(i>=n-i-1){
        return ;
    }
    swap(str[i],str[n-i-1]);
    rev(str,i+1);

   
}
int main(){
     string name= "abcde";
     rev(name,0);
     cout<<name;



    return 0;
}