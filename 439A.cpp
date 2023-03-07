#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, d;
    cin >> n >> d;
    int t[n];
    int i,j,k, tt=0;
    for(i=0;i<n;i++){
        cin >> t[i];
        tt += t[i];
    }

    if(d < (tt + (10 * (n-1))))
        cout << -1;
    else
        cout << ((d-tt) / 5);
}
