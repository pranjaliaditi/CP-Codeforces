#include <bits/stdc++.h>
using namespace std;

int fact(long long a)
{

    long long k;
    long long p = 1;

    if(a == 1 )
        return 1;

    else
        return (a * fact(a-1)) %  998244353998244353;
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
        long long n, sum = 0;
        cin >> n;
        long long a[n];

        ans[i] = 0;
        for(j=0;j<n;j++)
        {
             cin >> a[j];
             sum += a[j];
        }

        ans[i] = fact(sum)/(fact(sum-2) * 2);
        ans[i] *= 2;

    }

    for(i=0;i<t;i++)
        cout << (ans[i]) << "\n";
}


