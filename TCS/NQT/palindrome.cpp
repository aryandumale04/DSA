#include<bits/stdc++.h>
using namespace std;

int main () {

    string s;
    cout << "Enter a string  : ";
    cin>> s;

    int n = s.length();
    int start = 0;
    int end = n - 1;

    while (start < end) {
        if (s[start] != s[end]) {
            cout << false;
        return 0;}
        start++;
        end--;
    }
    cout << true;

    return 0;
}