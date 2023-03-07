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
        float a,b,c;
        cin>> a >> b >> c;
        float avg = (a+b)/2.0;
        if(avg > c)
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

