#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
 
        long long d = y - x;
        long long ans = 0;
 
       
 
        long long cnt = 0;
 
        if (d >= x) {
            cnt = min(k, d - x + 1);
        }
 
        for (long long i = 0; i < cnt; i++) {
            ans += d % (x + i);
        }
 
      
        ans += (k - cnt) * d;
 
        cout << ans << '
';
    }
 
    return 0;
}