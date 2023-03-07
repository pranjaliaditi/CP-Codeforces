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
        int cnt = n;
        string s,f;
        cin >> s;
        p =0;
        for(j=0;j<n-1;j++)
        {
            if(s[p] == s[p+1])
                {
                    cnt--;

                    s[p] = 0;

                    //s.erase((p+1),1);

                    f = s.substr(0,p+1).append(s.substr(p+2,(n-(p-2))));

                    for(l=0;l<f.length();l++)
                    {
                        f[l] = s[l];
                    }
                }

                else
                        p++;
        }
cout << cnt << "\n" << s << "\n";

     if( f.length() == 1)
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
