#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int lev[n];
    int i,j,k;
    int p,q;
    cin >> p;
    int X[p];

    for(i=0;i<p;i++)
    {
        cin >> X[i];
        k = X[i] - 1;
        lev[k] = 1;
    }

    cin >> q;
    int Y[q];

    for(i=0;i<q;i++)
    {
        cin >> Y[i];
        k = Y[i] - 1;
        lev[k] = 1;
    }

    int flag = 1;

    for(i=0;i<n;i++)
    {
        if(lev[i] != 1)
            flag = 0;
    }

    if(flag == 1)
        cout << "I become the guy.";

    else
        cout <<  "Oh, my keyboard!";

    return 0;
}
