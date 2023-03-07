#include <bits/stdc++.h>
using namespace std;
int main()
{
    string pl;
    cin >> pl;
    int ones = 0, zero = 0, flag = 0;

    int i,j,k;

    for(k=0;k<pl.length();k++)
    {
        if(pl[k+1] == '1' && pl[k] == '1')
            ones++;
        else if(pl[k+1] == '0' && pl[k] == '0')
            zero++;

        if(ones >= 6 || zero >= 6)
        {
            cout<<"YES";
            flag = 1;
            break;
        }

        if( pl[k+1] == '1' && pl[k] == '0')
        {
            zero = 0;
        }
        else if( pl[k+1] == '0' && pl[k] == '1')
        {
            ones = 0;
        }
    }

    if(flag == 0)
        cout<< "No";
}
