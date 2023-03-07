#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i,j,k,ans = 0;

   for(k = 97; k<=122; k++)
{

    for(i=0; i<s.length(); i++)
    {
        j = s[i];
        if(j == k)
        {
            ans++;
            break;
        }
    }
}

if(ans% 2 == 0)
    cout << "CHAT WITH HER!";

    else
    cout << "IGNORE HIM!";

    return 0;
}
