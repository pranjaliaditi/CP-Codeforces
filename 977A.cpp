#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n,k;
    cin >> n >> k;

    int i,j;
    for(i=0;i<k;i++){
        if(n%10 == 0){
            n /= 10;
        }

        else
            n--;
    }

    cout << n;
}
