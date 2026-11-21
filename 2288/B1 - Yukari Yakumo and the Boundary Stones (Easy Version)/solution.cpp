#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while(t--) {
 
        int x, y, m;
        cin >> x >> y >> m;
 
        string s;
        cin >> s;
 
        bool dp[105][105] = {};
 
        dp[x][y] = true;
 
        int ans = x + y;
 
        for(int i = 0; i < m; i++) {
 
            bool next[105][105] = {};
 
            for(int a = 0; a <= 100; a++) {
                for(int b = 0; b <= 100; b++) {
 
                    if(!dp[a][b])
                        continue;
 
                    if(a + b == 0)
                        continue;
 
                    if(s[i] == '+') {
 
                        // Choose a power 1 stone
                        if(a > 0) {
                            next[a-1][b+1] = true;
                        }
 
                        // Choose a power 2 stone
                        if(b > 0) {
                            next[a][b+1] = true;
                        }
 
                    }
                    else {
 
                        // Choose a power 2 stone
                        if(b > 0) {
                            next[a+1][b-1] = true;
                        }
 
                        // Choose a power 1 stone
                        if(a > 0) {
                            next[a-1][b] = true;
                        }
                    }
                }
            }
 
            for(int a = 0; a <= 100; a++) {
                for(int b = 0; b <= 100; b++) {
 
                    if(next[a][b]) {
                        ans = max(ans, a+b);
                    }
                }
            }
 
            for(int a = 0; a <= 100; a++) {
                for(int b = 0; b <= 100; b++) {
                    dp[a][b] = next[a][b];
                }
            }
        }
 
        cout << ans <<endl;
    }
 
    return 0;
}