#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        vector<long long> pref(n + 1, 0);
 
        for (int i = 0; i < n; i++) {
            pref[i + 1] = (pref[i] + a[i]) % k;
        }
 
        long long ans = 0;
        vector<long long> freq(k, 0);
 
        for (int r = 0; r <= n; r++) {
            if (r - k - 1 >= 0) {
                freq[pref[r - k - 1]]++;
            }
 
            ans += freq[pref[r]];
        }
 
        cout << ans << '
';
    }
 
    return 0;
}