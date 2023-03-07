#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i,j,k,l;
    int p1[t];
    int p2[t];
    int p3[t];

    for(i=0;i<t;i++)
    {
        int n;
        cin >> n;

        std::string s1[n], s2[n], s3[n];

        int fst = 0,snd = 0,thd = 0;

        for(j=0;j<n;j++)
            cin >> s1[j];

        for(j=0;j<n;j++)
            cin >> s2[j];

        for(j=0;j<n;j++)
            cin >> s3[j];

        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(s1[j]== s2[k])
                    break;
            }

            for(l=0;l<n;l++)
            {
                if(s1[j]== s3[l])
                    break;
            }

            if(k == n && l == n)
            {
                fst +=3;
            }

            else if(k != n && l == n)
            {
                fst +=1;
                snd +=1;
            }

            else if(l != n && k == n)
            {
                fst +=1;
                thd +=1;
            }


             for(k=0;k<n;k++)
            {
                if(s2[j]== s1[k])
                    break;
            }

            for(l=0;l<n;l++)
            {
                if(s2[j]== s3[l])
                    break;
            }

            if(k == n && l == n)
            {
                snd +=3;
            }

            else if(l != n && k == n)
            {
                snd +=1;
                thd +=1;
            }
               for(k=0;k<n;k++)
            {
                if(s3[j]== s1[k])
                    break;
            }

            for(l=0;l<n;l++)
            {
                if(s3[j]== s2[l])
                    break;
            }

            if(k == n && l == n)
            {
                thd +=3;
            }
      }

      p1[i] = fst;
      p2[i] = snd;
      p3[i] = thd;
    }

// output

    for(i=0;i<t;i++)
    {
        cout << p1[i] << " " << p2[i] << " " <<p3[i] << "\n";
    }



    return 0;
}
