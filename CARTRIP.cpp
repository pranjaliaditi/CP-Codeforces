#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i,j,k,x[t];
    for(i=0;i<t;i++)
    {
        cin>>j;
       if (j<300)
        x[i] = 3000;
        else
            x[i] = j*10;
    }
    for(i=0;i<t;i++)
        cout<<x[i]<<"\n";

}
