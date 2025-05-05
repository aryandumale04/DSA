#include<iostream>
using namespace std;
void rev(string &str,int i,int j){
    //base case 
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    rev(str,i,j);
}
int main(){
     string name= "babbar";
     rev(name,0,name.length()-1);
     cout<<name;



    return 0;
}