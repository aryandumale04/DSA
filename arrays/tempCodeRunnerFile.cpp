#include<iostream>
using namespace std;
//length of a string
bool checkpalindrome(char arr[] ,int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;

        }
        else{
            s++;  
            e--;
    }
    }
    return 1;
}
int gtelen(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}

//donot pass length or array //)


//reverse a string
void reverse(char arr[],int len){
    int s=0;
    int e=len-1;
    while(s<e){
         swap(arr[s++],arr[e--]);


    }
   
     }

int main(){

    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    // name[2]='\0';
    cout<<"Your name is "<<endl;//cin stop execution when you give it enter(\n),tab(\t) and space 
    cout<<name;
    int len=gtelen(name);
    cout<<endl<<"Length of youe name is :"<<len;
    cout<<endl<<"Original String "<<name;
    // reverse(name,len);
    // cout<<endl<<"Reversed String "<<name;
    cout<<endl<<"The string is palindrome or not "<<checkpalindrome(name,len);

return 0;
}