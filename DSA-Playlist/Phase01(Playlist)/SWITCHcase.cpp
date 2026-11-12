#include<iostream>
using namespace std;
int main(){
    char num='a';
    switch(num){//can take int and char value ,but cannot take float and string
        case 1:
        cout<<"First"<<endl;
        break;
        case '1'://nested switch case possible
        cout<<"character one "<<endl;
        break;
        default://not mandatory , if no case defined choosen then nothing happens (no output)
        cout<<"Default case"<<endl;
    }

}