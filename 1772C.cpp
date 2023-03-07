#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int i,j,l, ans[t];
    for(i=0;i<t;i++){
      int k,n;
      cin >> k >> n;
      int a[k];
      a[0] =1;
      for(j=1,l=1;l<k && a[l-1] < n;j++,l++){
            if((a[l-1]+j)<=n)
            a[l] = a[l-1] + j;
      else
        break;
      }
    for(j=0;j<k;j++) cout << a[j] << " ";
    cout << "\n";
    }
}
