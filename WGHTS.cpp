#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i;
    int flag[t];
    for(i=0;i<t;i++)
    {
        float a,b,c,W;
        cin>> W >> a >> b >> c;

        if( W == (a+b) || W == (b+c) || W == (a+c) || W == (a+b+c) || W == a || W == b || W == c)
            flag[i] = 1;
        else
            flag[i] = 0;
    }

    for(i=0;i<t;i++)
    {
        if(flag[i] == 1)
            cout << "YES \n";
        else
            cout << "NO \n";
    }

}


