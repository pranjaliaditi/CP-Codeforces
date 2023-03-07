#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int ans;
    int i,j,k;
    if(a!=1 && b!= 1 && c!= 1)
        ans = a * b * c;
    else
    {
        k = a + b + c;
        if(a==1 && b== 1 && c== 1) //|| (a == 1 && b == 1) || (a == 1 && c == 1) || (b == 1 && c == 1))
        ans = a + b + c;

        else if(a == 1)
        {
           i = (a+b) * c;
           j = (a) + (b*c);

           ans = max (i, max(j,k));
        }

         else if(b == 1)
        {
           i = (a+b) * c;
           j = a *( b + c);
           ans = max (i, max(j,k));
        }

        else if(c == 1)
        {
           i = a * (b+c);
           j = (a * b) + c;
          ans = max (i, max(j,k));
        }
    }

    cout << ans;

    return 0;
}
