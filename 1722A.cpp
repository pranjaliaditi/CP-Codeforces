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

        char s[100];

        cin >> n >> s;

        int T = 0,I = 0,m = 0,u = 0,r = 0;

        if(n != 5)
            flag[i] = 0;

        else
            {
                for(j=0;j<n;j++)
                {
                    if(s[j]!= 'T' && s[j]!= 'i' && s[j]!= 'm' && s[j]!= 'u' && s[j]!= 'r')
                {
                    flag[i] = 0;
                    break;
                }

                if(s[j]== 'T')
                T = 1;
                if(s[j]== 'i')
                I = 1;
                 if(s[j]== 'm')
                m = 1;
                 if(s[j]== 'u')
                u = 1;
                 if(s[j]== 'r')
                r = 1;

        }

        }

        if(T == 1 && I == 1 && m == 1 && u == 1 && r == 1)
            flag[i] = 1;

            else
                flag[i] = 0;

    }



    for(k=0;k<t;k++)
    {
        if(flag[k] == 0)
            cout << "NO \n";

        else if(flag[k] == 1)
            cout << "YES \n";
    }

    return 0;
}
