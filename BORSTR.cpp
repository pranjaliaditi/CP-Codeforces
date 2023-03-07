#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    int i,j,k;
    int ans[t];
    for(i=0;i<t;i++)
    {
        int len;
        cin >> len;
        string s;
        cin >> s;

        int flag = 1, tog = 1;
        for(j=1;j<len;j++)
        {
            if(s[j] != s[j-1])
                flag = 0;
             else
                    tog = 0;
        }
        if(flag == 1)
            {
                ans[i] = (len/2);
                if((len/2) %2 == 1)
                    ans[i] += 1;
            }


        if(flag == 0 && tog == 1)
        {
            vector <int> alpha(26,0);
            for(j=0;j<len;j++)
            {
                k = s[j] - 97;
                alpha[k]++;

                if(alpha[k] > 1)
                {
                    ans[i] = 1;
                    break;
                }
            }
        }


    }

    for(i=0;i<t;i++)
        cout << ans[i] << "\n";
}
