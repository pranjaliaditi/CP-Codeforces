#include <bits/stdc++.h>
using namespace std;
int main()
{
    string in;
    char out[1000];

    cin >> in;
    int i,j,k,acount=0;

    j = 0;

    for(i=0;i<(int)in.length();i++)
    {
        if(in[i] >= 65 && in[i] <= 90)
            in[i] += 32;

        if(in[i] >= 97)
            {
                if(in[i] != 'a' && in[i] != 'e' && in[i] != 'i' && in[i] != 'o' && in[i] != 'u' && in[i] != 'y')
                    {
                        out[j] = '.';
                        out[j+1] = in[i];
                        j = j + 2;
                        acount+=2;
                    }
                else{
                    acount--;
                }
            }
    }

    for(k=0;k<j;k++)
    cout << out[k];

    return 0;
}
