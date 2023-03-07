#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int ans[t];
    int i,j,k;
    for(i=0;i<t;i++)
    {
        int r1,r2,r3,r4;
        cin >> r1 >> r2 >> r3 >> r4;
        ans[i] = 0;
        if(r1 == 1 || r2 == 1 || r3 == 1 || r4 == 1)
            ans[i] = 1;
    }

    for(i=0;i<t;i++)
    {
        if(ans[i] == 0)
            cout << "IN \n";
        else
            cout << "OUT \n";
    }
}
