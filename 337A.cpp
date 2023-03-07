#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;

    int i,j=0,k,d1,d2, diff;

    int f[m];

    for(i=0;i<m;i++)
        cin >> f[i];

    sort(f,f+m);

    d1 = f[n-1] - f[0];
    d2 = d1;
    diff = d1;

   for(i=0;i<=m-n;i++)
   {
      j = f[i+n-1] - f[i];

       if(diff > j)
        diff = j;
   }

cout << diff;
    return 0;
}
