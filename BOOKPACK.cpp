#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i,j,k, ans[t];
    for(i=0;i<t;i++)
    {
        int x,y,z;
        cin >> x >> y >> z;
        if(y <= z)
        {
            ans[i] = x;
        }

        if(y>z)
        {
            ans[i] = (y/z) * x;
            if(y%z != 0)
                ans[i] += x;
        }
    }

    for(i=0;i<t;i++)
    {
        cout << ans[i] << "\n";
    }
}
