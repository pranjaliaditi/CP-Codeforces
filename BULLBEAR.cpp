#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    int i,j,k;
    int ans[t];
    for(i=0;i<t;i++)
    {
        int x,y;
        cin >> x >> y;
        if(y>x)
            ans[i] = 1;
        else if(x>y)
            ans[i] = -1;
        else
            ans[i] = 0;
    }

    for(i=0;i<t;i++)
    {
        if(ans[i] == 1)
            cout << "PROFIT \n";
        else if(ans[i] == -1)
            cout << "LOSS \n";
        else
            cout << "NEUTRAL \n";
    }
}
