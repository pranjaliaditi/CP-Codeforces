#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i,j,k,l,m, ones;
    int ans[t];
    for(i=0;i<t;i++)
    {
        int n;
        cin >> n;
        int a[n];
        for(j=0;j<n;j++)
            {
                cin >> a[j];

                if(a[j] == 1)
                    ones++;
            }

        sort(a,a+n);

        ans[i] = 0;

    }

    for(i=0;i<t;i++)
        cout << ans[i] << "\n";
}
