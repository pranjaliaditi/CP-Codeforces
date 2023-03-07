#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    int i,j,k;
    int ans[t];
    for(i=0;i<t;i++)
        {
            ans[i] = 1;
            k = 0;
            int n;
            cin >> n;
            vector <int> arr(n,1);
            vector <int> arrans((n/2),1);
            for(j=0;j<n;j++)
                cin >> arr[j];
            for(j=0;j<n-1;j++)
            {
                int temp = ((arr[j] * arr[j+1]) < (arr[j] + arr[j+1]))? (arr[j] + arr[j+1]): (arr[j] * arr[j+1]);
                arrans[k] = temp;
                k++;
            }

            for(j=0;j<(n/2);j++)
            {
                ans[i] *= arrans[j];
            }
        }
        for(i=0;i<t;i++)
        cout << ans[i] << "\n";
}
