#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

long long solve(int n, string z) {
    // pref[i] = min lamps to cover all posts in range [0 ... i-1]
    vector<long long> pref(n + 1, INF);
    // suff[i] = min lamps to cover all posts in range [i ... n-1]
    vector<long long> suff(n + 1, INF);

    // 1. Compute Prefix DP
    pref[0] = 0;
    for (int i = 0; i < n; ++i) {
        if (pref[i] == INF) continue;

        // Propagate coverage backward (if we can cover [0...i], we can cover [0...i-1] for free)
        // Wait, forward propagation: if pref[i] is valid, we can extend it:
        for (int lamp : {i + 1, i, i - 1}) {
            if (lamp >= 0 && lamp < n && z[lamp] == 'L') {
                int covered_up_to = min(n, lamp + 2);
                pref[covered_up_to] = min(pref[covered_up_to], pref[i] + 1);
            }
        }

        // Essential Fix: If position i is already covered by a lamp that overshot past i,
        // propagate that validity to i + 1.
        pref[i + 1] = min(pref[i + 1], pref[i + 1]); 
    }

    // Monotonic Fill Fix for Prefix:
    // If we can cover up to boundary K, we can certainly cover up to boundary K-1 with <= cost.
    for (int i = n - 1; i >= 0; --i) {
        pref[i] = min(pref[i], pref[i + 1]);
    }

    // 2. Compute Suffix DP
    suff[n] = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (suff[i + 1] == INF) continue;

        for (int lamp : {i - 1, i, i + 1}) {
            if (lamp >= 0 && lamp < n && z[lamp] == 'L') {
                int covered_from = max(0, lamp - 1);
                suff[covered_from] = min(suff[covered_from], suff[i + 1] + 1);
            }
        }
    }

    // Monotonic Fill Fix for Suffix:
    for (int i = 0; i < n; ++i) {
        suff[i + 1] = min(suff[i + 1], suff[i]);
    }

    // Baseline: Cost without using the generator truck
    long long ans = pref[n];

    // 3. Try placing the generator truck at every position p (0 to n-1)
    for (int p = 0; p < n; ++p) {
        int left_uncovered = max(0, p - 1);
        int right_uncovered = min(n, p + 2);

        if (pref[left_uncovered] != INF && suff[right_uncovered] != INF) {
            ans = min(ans, pref[left_uncovered] + suff[right_uncovered]);
        }
    }

    return (ans >= INF) ? -1 : ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N; 
    if (cin >> N) {
        string z; 
        cin >> z;
        cout << solve(N, z) << "\n";
    }

    return 0;
}