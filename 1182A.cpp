#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n%2 == 1)
        cout<< 0;
    else{
            long long i,ans=1;
            for(i=0;i<(n/2);i++){
                ans = (long long) ans*2;
            }
            cout << ans;
    }

}
