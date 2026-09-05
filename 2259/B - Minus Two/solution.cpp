#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        int odd = 0;
        int x = 0;
        int y = 0;
 
        for(int i = 0; i < n; i++) {
            long long a;
            cin >> a;
 
            if(a % 2 == 1) {
                odd++;
            }
            else if(a % 4 == 0) {
                x++;
            }
            else {
                y++;
            }
        }
 
        cout << max({odd, x, y}) << '
';
    }
 
    return 0;
}