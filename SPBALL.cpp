#include <bits/stdc++.h>
using namespace std;

int fact(long long a)
{

    long long k;
    long long p = 1;
    for(k=a;k!=0;k--)
    {
        p *= (k% (1000000007));
    }

    return p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;
    long long ans[t];
    long long i,j,k;
    for(i=0;i<t;i++)
    {
        long long n;
        cin >> n;
        long long a[n];

        ans[i] = 0;
        for(j=0;j<n;j++)
        {
             cin >> a[j];
             ans[i] += fact(a[j]);
        }

    }

    for(i=0;i<t;i++)
        cout << (ans[i]) << "\n";
}

