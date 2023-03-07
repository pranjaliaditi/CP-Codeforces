#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>> t;
    int res[t];
    int i,j;
    for(i=0;i<t;i++)
    {
        cin>> a >> b >> c;
        int m = (a<c)?a:c;
        if(b<a || b<c || b<m)
            res[i] = 0;
        else
            res[i] = 1;
    }

    for(i=0;i<t;i++)
    {
        if(res[i]==1)
            cout<< "yes \n";
        else
            cout<< "no \n";
    }
    return 0;
}
