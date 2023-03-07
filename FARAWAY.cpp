#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,m;
    cin >> t;
    long long sum[t];
    long long i,j,k,l;
    for(i=0;i<t;i++)
    {
        cin >> n >> m;
        long long a[n],b[n];
        sum[i] = 0;
        for(j=0;j<n;j++)
        {
            cin >> a[j];
            k = (m-a[j]);
            l = a[j]-1;
            long long d = ( k >= l)? k:l;
            sum[i] += d;
        }
    }

    for(i=0;i<t;i++)
        cout << sum[i] << "\n";
}
