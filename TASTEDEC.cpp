#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i,j,k, ans[t];
    for(i=0;i<t;i++)
    {
        int x,y;
        cin >> x >> y;
        if((x*2) > (y*5))
            ans[i] = 1;
        else  if((x*2) < (y*5))
            ans[i] = 2;
        else
            ans[i] = 0;
    }

    for(i=0;i<t;i++)
    {
        if(ans[i] == 1)
            cout << "Chocolate \n";
        else if(ans[i] == 2)
            cout << "Candy \n";
        else
            cout << "Either \n";
    }
    return 0;
}
