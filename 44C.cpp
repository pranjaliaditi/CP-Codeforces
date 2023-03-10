#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int days[n] = { 0 };
    int i,j,k;
    for(i=0;i<m;i++){
        int a,b;
        cin >> a >> b;

        for(j=a-1;j<b;j++){
            days[j]++;
        }
    }

    for(i=0;i<n;i++){
        if(days[i] != 1){
            cout << i+1 << " " << days[i];
            break;
        }
    }

    if(i == n)
        cout << "OK";
}
