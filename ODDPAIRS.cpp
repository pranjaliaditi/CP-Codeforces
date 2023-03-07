#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i;
    long ans[t];
    for(i=0;i<t;i++)
    {
        long n;
        cin >> n;

        long k = ceil((n/2));

        if((n%2) == 0)
            ans[i] = k * k * 2;
        else
        {

            ans[i] = ((n/2)+1) * (n/2) * 2;
        }

    }

    for(i=0;i<t;i++)
        cout << ans[i] << "\n";
}
