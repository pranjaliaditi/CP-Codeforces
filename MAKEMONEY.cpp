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
        int n,x,c;
        cin >> n >> x >> c;
        int a[n], sum = 0;
        for(j=0;j<n;j++)
        {
            cin >> a[j];
            sum += a[j];
            int sm = (x-a[j] - c);
            if(x!=a[j] && sm > 0 )
                sum+= sm;
        }
        ans[i] = sum;
    }
    for(i=0;i<t;i++)
        cout << ans[i] << "\n";
}
