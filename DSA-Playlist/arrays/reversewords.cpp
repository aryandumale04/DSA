#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void reversed(string &s){

    reverse(s.begin(),s.end());//string reverse along with words so we need to reverse back the words

    int start=0;
    for(int i=0;i<s.length();++i){
        if(s[i]==' ' || i==s.length()){
            reverse(s.begin()+start,s.begin()+i);
            start= i+1;

        }
    }
}

int main(){
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    reversed(s);
    cout<<endl<<"The reverse word string is "<<s;



return 0;
}