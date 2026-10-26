#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(n), pos(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }
 
        int m = n - k + 1;
        vector<int> missing;
 
        for (int x = 0; x < m; x++) {
            if (pos[x] >= m) {
                missing.push_back(x);
            }
        }
 
        if (missing.empty()) {
            cout << -1 << '
';
            continue;
        }
 
        int target = m;
 
        if (missing.size() >= 2) {
            target = missing[1];
        }
 
        int i = -1;
 
        for (int j = 0; j < m; j++) {
            if (a[j] >= target) {
                i = j;
                break;
            }
        }
 
        cout << i + 1 << " " << pos[missing[0]] + 1 << '
';
    }
 
    return 0;
}