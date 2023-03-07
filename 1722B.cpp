#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i,j,k;
    int flag[t];
    for(i=0;i<t;i++)
    {
        int n;
        cin >> n;

        string r1,r2;
        cin >> r1 >> r2;

        if(r1.length() != r2.length())
        {
            flag[i] = 0;
        }

        else{
        for(j=0;j<n;j++)
        {
            if(r1[j] == 'R' && r2[j]!='R')
            {
                flag[i] = 0;
                break;
            }

            if(r1[j] == 'G' && r2[j]=='R')
                {
                flag[i] = 0;
                break;
            }

             if(r1[j] == 'B' && r2[j]=='R')
                {
                flag[i] = 0;
                break;
            }

            flag[i] = 1;
        }}

    }

    for(k=0;k<t;k++)
    {
        if(flag[k] == 0)
            cout << "NO \n";

        else if(flag[k] == 1)
            cout << "YES \n";
    }

}
