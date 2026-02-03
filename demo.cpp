#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    cin.ignore();
    int x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
       int x ;
       cin >> x;
       arr[i] = x;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) cout<<" ";
    }

    return 0;
}
