#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        long long x;
        cin >> x;
 
        long long ans = x;
 
        for(long long c = 0; c <= x; c++) {
 
            long long sum = (c+1)*(c+2)/2;
            long long k;
 
            if(x > sum) {
                k = (c+1) + (x-sum);
            }
            else {
                long long low = 1;
                long long high = c+1;
 
                while(low < high) {
 
                    long long mid = (low+high)/2;
 
                    long long damage = mid*(2*c+3-mid)/2;
 
                    if(damage >= x) {
                        high = mid;
                    }
                    else {
                        low = mid+1;
                    }
                }
 
                k = low;
            }
 
            ans = min(ans, c+k);
        }
 
        cout << ans << endl;
    }
 
    return 0;
}