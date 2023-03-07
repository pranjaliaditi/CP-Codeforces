#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s[n];
    int i,j,k;
    int p=0,m=0,pe=0;
    for(i=0;i<n;i++)
    {
        cin >> s[i];
        if(s[i] == 1)
            p++;
        else if(s[i] == 2)
            m++;
        else
            pe++;
    }

    int w;

    if( p <= m && p <= pe )
        w = p;
    else if(m<= pe )
        w = m;
    else
        w = pe;

   int cnt = 0, o =0, t=0, th = 0;

   cout << w << "\n";

   if(w!=0)
   {
    for(i=0;i<w;i++)
    {
        for(j=0;j<n;j++)
        {
            if (s[j] == 1)
            {
                cout << j+1 << " ";
                s[j] = 0;
                break;
            }
        }

         for(j=0;j<n;j++)
        {
            if (s[j] == 2)
            {
                cout << j+1 << " ";
                s[j] = 0;
                break;
            }
        }

         for(j=0;j<n;j++)
        {
            if (s[j] == 3)
            {
                cout << j+1 << " ";
                s[j] = 0;
                break;
            }
        }

        cout << "\n";


    }

   }

}
