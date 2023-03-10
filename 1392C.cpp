#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int supp[n];
        int mx = 0;

        for(int i = 0; i<n;i++)
            {
                cin >> supp[i];
            }

            int ans = 0, m = 0;

            for(int i = 0; i< n-1 ;i++)
                ans = ans +  max((supp[i]-supp[i+1]), m);

        cout << ans << "\n";
    }
}
