#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k,n,w,sum,ans = 0;
    cin >> k >> n >> w;
    sum = ceil((w * (w+1))/2);
    sum *= k;

    ans = sum - n;
    if(ans<0)
        cout << 0;
    else
        cout << ans;
}
