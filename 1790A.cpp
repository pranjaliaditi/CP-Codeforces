#include <bits/stdc++.h>
using namespace std;

#define int long long
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string pi = "3141592653589793238462643383279";
    int t;
    cin >> t;
    int i,j,k;
    for(i=0;i<t;i++){
            int cnt = 0;
        string s;
        cin >> s;
        for(j=0;j<s.length();j++){
            k = s[j];
            int n = pi[j];

            if(k != n)
            {
                break;
            }
    else
        cnt++;

        }

    cout << cnt << "\n";
    }
}
