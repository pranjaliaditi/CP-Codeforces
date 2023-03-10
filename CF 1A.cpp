#include <bits/stdc++.h>
using namespace std;
int main(){

    long long n,m,a;
    cin >> n >> m >> a;
    long long r,c,ans;

    if( (n%a) != 0){
     r = (n/a) + 1;
    }
    else
        r = n/a;

    if( (m%a) != 0){
     c = (m/a) + 1;
    }
    else
        c = m/a;
    ans = r * c;

    cout << ans;
}
