#include<bits/stdc++.h>
using namespace std;
int main () {

    int n ;
    cout << "Enter a number : "; 
    cin >> n; 
    // factorial is defined only for non-negative numbers 
    // 0! = 1 :  defined this for consitency in mathematical formulas,especially in permutations and combinations
    if (n  == 0 || n == 1) {
        cout << 1;
    } else {
        int fact = 1;
        for (int i = n; i > 1; i--) fact *= i;
        cout << fact;
    }
}