#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int ans[t];
    int i,j,k;
    for(i=0;i<t;i++)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        string A,B;
        int l = n/2;
        A = s.substr(0,l);
        B = s.substr(l,l);

        if(A == B)
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
