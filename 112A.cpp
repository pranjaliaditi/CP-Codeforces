#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>> s1 >> s2;
    int i,j,k;
    for(i=0;i<s1.length();i++)
    {
        if(s1[i] != s2[i])
        {
            if(s1[i] > 90)
                s1[i] = s1[i] - 32;

            if(s2[i] > 90)
                s2[i] = s2[i] - 32;

            if(s2[i] > s1[i])
                {
                    cout << -1;
                    break;
                    }
            if(s2[i] < s1[i])
                {
                    cout << 1;
                    break;
                }
        }
    }

    if(i == s1.length())
        cout << 0;
}
