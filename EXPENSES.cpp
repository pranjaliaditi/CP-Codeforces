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
        int n,x;
        cin >> n >> x;
        int income = pow(2,x);
        int spend = pow(2,(x-n));
        ans[i] = spend;

   }
   for(i=0;i<t;i++)
        cout << ans[i] << "\n";
}
