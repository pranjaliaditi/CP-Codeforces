#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int i,j,k;
    cin>> t;
    int m[t];
    for(i=0;i<t;i++)
    {
        cin>>n;
        int s[n];
        string v;
        for(j=0;j<n;j++)
            cin>> s[j];

            cin>> v;

         m[i]=s[0];

        for(j=0;j<n;j++)
        {
            if(v[j].compare('0')==0 && m[i]>=s[j])
                m[i] = s[j];
        }

    }

    for(i=0;i<t;i++)
        cout<< m[i] << "\n";

    return 0;
}
