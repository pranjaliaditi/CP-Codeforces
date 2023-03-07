#include <bits/stdc++.h>
using namespace std;
int main()
{
    long mx=0, n, ans = 0;
    cin>> n;
    long a[n];
    long i,j,k;

    for(i=0;i<n;i++)
        cin>> a[i];

    for(i=0;i<n;i++)
    {
       if(i!= (n-1) && a[i] <= a[i+1] )
       {
           ans ++;
           if(mx<=ans)
            mx = ans;
       }

       if(a[i+1] < a[i])
        ans = 0;
    }
 if (mx < n)
    cout << mx+1;

    else
        cout<< mx;
}
