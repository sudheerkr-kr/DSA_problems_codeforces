#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
        long long sum = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
 
        bool found = false;
 
        for (int i = 1; i < n - 1; i++) {
            if (a[i] >= 2) {
                found = true;
                break;
            }
        }
 
        long long ans;
 
        if (found) {
            ans = sum - 1;
        }
        else if (a[0] >= 2 && a[n - 1] >= 2) {
            ans = a[0] + a[n - 1] - 1;
        }
        else if (a[0] >= 2 || a[n - 1] >= 2) {
            ans = max(a[0], a[n - 1]);
        }
        else {
            ans = -1;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}