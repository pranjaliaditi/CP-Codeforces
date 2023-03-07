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
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        if(a == b)
            ans[i] = 1;
        else if(a > b && y >= (a-b))
            ans[i] = 1;
        else if(b > a && x >= (b-a))
            ans[i] = 1;
        else
            ans[i] = 0;
    }

    for(i=0;i<t;i++)
    {
        if (ans[i] == 1)
            cout << "YES \n";
        else
            cout << "NO \n";
    }
}
