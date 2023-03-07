#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int ans[500][t],n[t];
    int i,j,k;
    for(i=0;i<t;i++)
    {
        k = 0;
        cin >> n[i];

        for(j=1;j<=n[i];j++)
        {
            if(k == n[i])
                break;

            float p = j * (j+1);
            float rt = sqrt(p);
            float c = floor(rt);
            if((rt-c) != 0)
            {
                ans[k][i] = j;
                k++;
            }
            else
            {
                ans[k][i] = j +1;
                k++;
                ans[k][i] = j;
                j++;
            }
        }
    }

    for(i=0;i<t;i++)
    {
        for(j=0;j<n[i];j++)
            cout << ans[j][i] << " ";

        cout << "\n";
    }
}
