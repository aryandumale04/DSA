#include<iostream>
using namespace std; 

int main () {

    // ULTRA BASIC
    // int x;
    // string a;
    // cin >> x;
    // getline(cin, a);

    // cout<< x << endl;
    // cout << a << endl;




//     #include<bits/stdc++.h>
// using namespace std; 

// int main () {
//     // case 01 :  string format array  :  when the size of array is not given
//     string line;
//     getline(cin, line);
//     stringstream ss(line);
    
//     vector<int> arr;
//     int num;
//     while (ss >> num) {
//         arr.push_back(num);
//     }
    
//     int size  =  arr.size();
//     cout << "The size of the array is : " << size << endl;
//     cout << "The elements taken in input are as follows : ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] <<" ";
//     }
//     return 0;
// }

    //     // case 02 : comma separated array input 
    // string line;
    // getline(cin, line);
    // stringstream ss(line);
    // string num;
    // vector<int> arr;
    // while (getline(ss,num, ',')) {
    //     if (!num.empty()) arr.push_back(stoi(num));  
    // }
    // int size = arr.size();
    // cout << "The size of the array is : " << size << endl;
    // cout << "The elements taken in input are as follows : ";
    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] <<" ";
    // }


    //     // case 03 : bracket array input + commas 
    // string line;
    // getline(cin, line);
    // string newString = line.substr(1, line.length() - 2);
    // stringstream ss(newString);
    // string num;
    // vector<int> arr;
    // while (getline(ss,num, ',')) {
    //     if (!num.empty()) arr.push_back(stoi(num)); 
    // }
    // int size = arr.size();
    // cout << "The size of the array is : " << size << endl;
    // cout << "The elements taken in input are as follows : ";
    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] <<" ";
    // }

    // //case 04  :  words separated by spaces 
    // string line;
    // getline(cin, line);
    // stringstream ss(line);
    // string word;
    // vector<string> arr;
    // while (ss >> word) {
    //     arr.push_back(word);
    // }
    // int size = arr.size();
    // cout << "The size of the array is : " << size << endl;
    // cout << "The elements taken in input are as follows : ";
    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] <<" ";
    // }


    // // n digits after decimal points 
    // double num; 
    // cin >> num;
    // cout << fixed << setprecision(5)<<num;

    return 0;
}