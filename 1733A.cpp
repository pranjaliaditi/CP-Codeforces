#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long ans[t],i,j;

    for(i=0;i<t;i++)
    {
        int n,k;
        cin >> n >> k;
        long long a[n];

        for(j=0;j<n;j++)
        {
            cin >> a[j];
        }

        ans[i] = 0;
        sort(a,a+n,greater<long long>());
        for(j=0;j<k;j++)
            ans[i] += a[j];
    }

    for(i=0;i<t;i++)
        cout << ans[i] << "\n";
}
