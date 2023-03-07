#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b, diff,same;
    cin >> a >> b;
    diff = min(a,b);
    same = (max(a,b) - diff)/2;
    cout << diff << " " << same;
}
