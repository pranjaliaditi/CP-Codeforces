#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int i,j,l, t=0, teams = 0, y[n];
    for(i=0;i<n;i++){
        cin >> y[i];
        if(5>=(y[i]+k))
            t++;
        if(t == 3)
        {
            teams++;
            t = 0;
        }
    }

    cout << teams;

}
