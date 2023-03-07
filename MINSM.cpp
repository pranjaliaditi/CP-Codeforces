#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int k = (a<=b)?a:b;
    while (k > 0)
    {

        if (a % k == 0 && b % k == 0) {
            break;
        }
        k--;
    }
    return k;
}


int main()
{
    int t;
    cin>> t;

    int i,j,k;
    long sum[t];

    for(i=0;i<t;i++)
    {
        int n;
        cin>> n;

        long a[n];

        for(j=0;j<n;j++)
            cin>> a[j];

        for(j=0;j<n;j++)
        {
             int mgcd = a[j],ggcd;
            for(k=0;k<n;k++)
            {
                ggcd = gcd(a[j],a[k]);
                if(ggcd <= mgcd)
                    mgcd = ggcd;
            }

            a[j] = mgcd;
        }

        sum[i] = 0;
        for(j=0;j<n;j++)
        sum[i] = sum[i] + a[j];;

    }

    for(i=0;i<t;i++)
    cout<< sum[i] << "\n";

    return 0;
}
