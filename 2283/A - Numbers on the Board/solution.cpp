#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int l, r;
        cin >> l >> r;
 
        int n = r - l + 1;
        long long total = 1LL * (l + r) * n / 2;
 
        int ans = n;
 
        for(int m = 1; m <= n; m++) {
            long long mini = 1LL * m * (2LL * l + m - 1) / 2;
            long long maxi = 1LL * m * (2LL * r - m + 1) / 2;
 
            if(mini <= total && total <= maxi) {
                ans = m - 1;
                break;
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}