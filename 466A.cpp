#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int i,j,k;

    int ans = 0;
  while(n > 0)
    {
   if(n < m)
   {
       if(b < a * n)
        ans = ans + b;
       else
        ans = ans + (a * n);
  break;
   }

   else
        {
           i = b/m;
           j = i * m;
           k = a * m;
           if(j < k)
            ans = ans + b;
           else
            ans = ans + (a * m);
           n = n - m;
       }
   }

   cout << ans;
}
