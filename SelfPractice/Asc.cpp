#include<iostream>
using namespace std;
int findAsc(char ch){
    int value =  ch - 'a';

    if(value<0){
        int result = (ch - 'A')+65;
        return result;

    }else{
        int result = (ch-'a')+97;
        return result;


    }
}
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    int ans = findAsc(ch);
    cout<<ans;
    return 0;

}