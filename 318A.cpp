#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,k, i,j,l;
    cin>> n >> k;

    if(n%2 == 0)
        l = n/2;

    else
        l = (n/2) + 1;

    if(k<=l)
        cout<< (2 * (k-1)) + 1;

    else
        cout << (2 * (k-l));

    return 0;

}
