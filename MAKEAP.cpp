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
        if((x+y) % 2 == 0)
            ans[i] = (x+y)/2;
        else
            ans[i] = -1;
    }
    for(i=0;i<t;i++)
        cout << ans[i] << "\n";
}
