#include<bits/stdc++.h>
using namespace std;
int main () {
    long long number;
    long long  series;
    long long sum = 0;
    cin >> number >> series;

    // processing logic
    for (int i = 1; i <= series; i++) {
        int j = i;
        int num = 0;
        while(j > 0) {
            num = (num * 10) + number; 
            j--;
        }
        sum += num;
    }

    cout << sum;
    return 0;
}