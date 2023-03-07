#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>> s;
    int flag = 0;
    int i,j,k;
    for(i=0;i<s.length();i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9' )
           {
               cout << "YES";
               flag = 1;
               break;
           }
    }

    if(flag == 0)
        cout << "NO";
    return 0;
}
