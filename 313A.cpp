#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    long last, slast,k,l;
    cin>>n;
    if(n>=0)
        cout << n;
    else
    {
        last = n%10;
        k = n/10;
        slast = k % 10;
        if(last < slast)
        {
            cout<< k;
        }
        else
        {
            l = k/10;
            cout << l*10 + last;
        }
    }
}
