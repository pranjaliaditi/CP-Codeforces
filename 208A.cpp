#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>> s;
    int i,j,k;
    for(i=0;i<s.length();)
    {


        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
            {
                if (i!=0 && i!= (s.length() - 3))
                cout << " ";
                i = i + 3;
            }

            else
            {
                cout << s[i];
                i++;
            }

    }

    return 0;
}
