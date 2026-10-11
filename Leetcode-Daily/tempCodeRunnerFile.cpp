#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

long long solve(int n, string z) {
    // pref[i] = min lamps to cover posts in range [0 ... i-1]
    vector<long long> pref(n + 1, INF);
    // suff[i] = min lamps to cover posts in range [i ... n-1]
    vector<long long> suff(n + 1, INF);

    // 1. Compute Prefix DP
    pref[0] = 0; // Empty prefix needs 0 lamps
    for (int i = 0; i < n; ) {
        if (pref[i] == INF) break;

        // Try placing a lamp at the rightmost available live post
        int best_j = -1;
        for (int j : {i + 1, i, i - 1}) {
            if (j >= 0 && j < n && z[j] == 'L') {
                best_j = j;
                break;
            }
        }

        if (best_j == -1) break; // Cannot cover post i

        int next_i = min(n, best_j + 2);
        pref[next_i] = min(pref[next_i], pref[i] + 1);

        // Move to next unlit post
        i = best_j + 2;
    }

    // 2. Compute Suffix DP
    suff[n] = 0; // Empty suffix needs 0 lamps
    for (int i = n - 1; i >= 0; ) {
        if (suff[i + 1] == INF) break;

        // Try placing a lamp at the leftmost available live post
        int best_j = -1;
        for (int j : {i - 1, i, i + 1}) {
            if (j >= 0 && j < n && z[j] == 'L') {
                best_j = j;
                break;
            }
        }

        if (best_j == -1) break; // Cannot cover post i

        int prev_i = max(0, best_j - 1);
        suff[prev_i] = min(suff[prev_i], suff[i + 1] + 1);

        // Move to next unlit post to the left
        i = best_j - 2;
    }

    // Baseline: Cost without using the generator truck
    long long ans = pref[n];

    // 3. Try parking the truck at every possible position p (0 to n-1)
    // Truck at post p covers posts [p-1, p, p+1]
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
        auto result = solve(N, z);
        cout << result << "\n";
    }

    return 0;
}