#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long t;
    cin >> t;
    long ans[t];
    long i;
    for(i=0;i<t;i++)
    {
        long n;
        cin >> n;
        ans[i] = ((n-1) + (n-2))% 998244353;
    }

    for(i=0;i<t;i++)
        cout << ans[i] << "\n";

    return 0;
}
