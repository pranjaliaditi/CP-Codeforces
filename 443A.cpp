#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    getline(cin,st);
    int i,j,k,flag;

    char ch[100];
    j = 0;

    for(i=1;i<st.length()-1;)
    {
        flag = 1;

        for(k=0;k<j;k++)
        {
            if(ch[k] == st[i])
                flag = 0;
        }

        if(flag == 1)
        {ch[j] = st[i];
        j++;}
        i = i + 3;
    }

    cout << j;

}
