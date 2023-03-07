#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin >> t;
    long i,j,k;
    long ans[t];
    for(i=0;i<t;i++)
    {
        int x,y,z,sum,d;
        cin >> x >> y >> z;
        sum = 0;
        d = 0;
        if(x!=0)
            sum++;
        if(y!=0)
            sum++;
        if(z!=0)
            sum++;


        long a[3];
        a[0] = x;
        a[1] = y;
        a[2] = z;

        sort(a,a+3);

        x = a[2];
        y = a[1];
        z = a[0];


       if(x>1 && y>1)
       {
           d++;
           x--;
           y--;
       }

       if(x>1 && z>1)
       {
           d++;
           x--;
           z--;
       }

       if(y>1 && z>1)
       {
           d++;
           y--;
           z--;
       }

       if(x>0)
            d++;
        if(y>0)
            d++;
        if(z>0)
            d++;

        if(d>=sum)
            ans[i] = d;
        else
            ans[i] = sum;

    }

    for(i=0;i<t;i++)
    {
        cout << ans[i] << "\n";
    }
}
