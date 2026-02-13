#include<bits/stdc++.h>
using namespace std;

int main () {

    string inp;
    getline(cin, inp);

    string answer = "";
    int n = inp.length();

    for (int i = 0; i < n; i++) {
        if (i < n - 1 && inp[i+1] == '-') {
            // need to store current character;
            answer += inp[i];
        }
        if (i == n - 1) {
            answer += inp[i];
        }
    }

    cout<<answer;
    return 0;
}