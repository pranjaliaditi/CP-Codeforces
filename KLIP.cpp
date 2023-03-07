#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    string ans[1000];

    int i,j,l;
    for(i=0;i<t;i++)
    {
        long n,k;
        cin>> n >> k;
        string s;
        cin>> s;

        for(l=0;l<n-k+1;l++)
        {
            if(s[l] == '1')
            {
                for(j=l;j<(l+k);j++)
                {
                    if(s[j] == '1')
                        s[j] = '0';
                    else
                        s[j] = '1';
                }
            }
        }

        ans[i] = s;
    }

    for(i=0;i<t;i++)
        cout<< ans[i] << "\n";

    return 0;
}
