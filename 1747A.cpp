#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    int i,j,k,l, ans[t];

    for(i=0;i<t;i++)
    {
        int n;
        cin >> n;
        int a[n], s1 = 0,s2=0;

        for(j=0;j<n;j++)
        {
            cin >> a[j];

            if(a[j] <0)
            {
                s2 += (a[j]);

            }

            else
            {
                s1 += a[j];
            }
        }

        ans[i] = abs(abs(s1) - abs(s2));
    }

    for(i=0;i<t;i++)
        cout << ans[i] << "\n";

}
