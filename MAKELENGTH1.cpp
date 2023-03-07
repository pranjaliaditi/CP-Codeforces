#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i,j,k,l,p, ans[t];
    for(i=0;i<t;i++)
    {
        int n;
        cin >> n;
        char s[n];
        char f[n];

        int cnt = n;

        for(k=0;k<n;k++)
        cin >> s[k];

p =0;
        for(j=0;j<n;j++)
        {
            if(s[p] == s[p+1])
                {
                    cnt--;
                    s[p] = 0;

                        for(k=0,l=0;k<n-j;k++,l++)
                        {
                            s[l] = s[k];

                            if(k == 1)
                                {
                                    k++;
                                }
                        }
                }

                else
                    {
                        p++;
                        if(p >= n)
                            break;
                        }
        }
//cout << cnt << "\n";

        if( cnt == 1)
            ans[i] = 1;
        else
            ans[i] = 0;
    }


    for(i=0;i<t;i++)
    {
        if(ans[i] == 1)
            cout << "YES \n";
        else
            cout << "NO \n";
    }
}
