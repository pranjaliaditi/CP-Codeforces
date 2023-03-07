#include <bits/stdc++.h>
using namespace std;
int main(){
     int t;
    cin >> t;
    int ans[t];
    int i;
    for(i=0;i<t;i++){
            long n;
    cin >> n;
    long a[n];
    long j;
    for(j=0;j<n;j++)
        cin >> a[j];
        ans[i] = a[0];
    sort(a+1,a+n);
    for(j=1;j<n;){
        if(ans[i] < a[j]){
            ans[i]++;
            a[j]--;
        }
        else
            j++;
    }
    }
    for(i=0;i<t;i++){
        cout << ans[i] << "\n";
    }
}
