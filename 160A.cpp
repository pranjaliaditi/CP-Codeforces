#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,j,k=0;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    int me = 0, twin = 0, m= 0;
    int cnt = 0;
    for(;;)
    {
        int sum = 0;
        m = 0;
    for(i=0;i<n;i++)
    {
       sum = sum + a[i];
        if(m<=a[i])
            {
                m = a[i];
                k = i;
            }
    }
    me = me + m;
    sum = sum - a[k];
    a[k] = 0;
    twin = sum;
    cnt++;
    if(me > twin)
    {
        break;
    }

    }

    cout<<cnt;
    return 0;
}
