#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    int i,j,k,ans[t];
    for(i=0;i<t;i++){
        int sum = 0;
        int n,m;
        cin >> n >> m;
        int a[n],b[m];
        for(j=0;j<n;j++){
            cin >> a[j];
        }
        for(j=0;j<m;j++){
            cin >> b[j];
        }
        k=1;
        while(k<=m){

            sort(a,a+n);
            a[0] = b[k-1];
            k++;
        }
        for(j=0;j<n;j++)
            sum+= a[j];
        ans[i] = sum;

    }

    for(i=0;i<t;i++)
        cout << ans[i] << "\n";
}
