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
        int w;
        cin >> w;
        if(w>= 2000)
            ans[i] = 1;
        else
            ans[i] = 0;
    }

    for(i=0;i<t;i++)
    {
        if(ans[i] == 1)
            cout << "YES \n";
        else
            cout << "NO \n";
    }
}
