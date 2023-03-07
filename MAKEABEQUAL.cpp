#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin >> t;
    long ans[t];
    long i,j,k;
    for(i=0;i<t;i++)
    {
        long n;
        cin >> n;
        long a[n],b[n], sum, diff[n], m= 0;
        for(j=0;j<n;j++)
            cin >> a[j];
        for(j=0;j<n;j++)
            cin >> b[j];
         sum = 0;

         for(j=0;j<n;j++)
         {
             diff[j] = (a[j] - b[j]);

             sum = sum + diff[j];

             if(m <= (diff[j]))
                m = diff[j];
         }


        if(sum == 0)
            ans[i] = m;

        else
            ans[i] = -1;
    }

    for(i=0;i<t;i++)
        cout << ans[i] << "\n";

    return 0;

}
