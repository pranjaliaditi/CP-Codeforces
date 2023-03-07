#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n], y[n], z[n];
    int i,j,k;
    int sx = 0, sy = 0, sz = 0;
    for(i=0;i<n;i++)
        {
            cin >> x[i] >> y[i] >> z[i];
            sx += x[i];
            sy += y[i];
            sz += z[i];
        }

    if(sx == 0 && sy == 0 && sz == 0)
        cout << "YES";
    else
        cout << "NO";
}
