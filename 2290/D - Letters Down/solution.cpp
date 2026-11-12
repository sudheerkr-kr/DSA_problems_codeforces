#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        //int i = 0 , j = n -1;
        int ans = 0;
        
        while(true){
            char mx = 'a';
            
            for(int i = 0; i < n/2; i++){
                if(s[i] != s[n - 1 - i]){
                    mx = max(mx, max(s[i], s[n - 1 - i]));
                }
            }
            
            if(mx == 'a') break;
            
            for(int i = 0; i < n; i++){
                if(s[i] == mx){
                    s[i]--;
                }
            }
            ans++;
        }
        cout << ans << "
";
    }
    return 0;
}