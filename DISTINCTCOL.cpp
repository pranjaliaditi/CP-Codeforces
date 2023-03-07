#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i,j,k;
    int ans[t];
    for(i=0;i<t;i++)
    {
        int n;
        cin >> n;
        int a[n];
        for(j=0;j<n;j++)
            cin >> a[j];

        int m = a[0];

        for(j=0;j<n;j++)
        {
            if(m<a[j])
                m = a[j];
        }

        ans[i] = m;
    }

    for(i=0;i<t;i++)
        cout << ans[i] << "\n";
}
