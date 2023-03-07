#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    int n , m, ans = 0, c2 = 0, flag = 0;
    cin >> n >> m;
    if(n < m)
        cout << -1;
    else{
        ans = n/2 + n%2;
        c2 = n/2;

    if(ans%m == 0)
        cout << ans;

    else {
            while(c2 > 0){
                c2--;
                ans++;
                if(ans%m == 0)
                {
                    cout << ans;
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
                cout << -1;
    }
    }

}
