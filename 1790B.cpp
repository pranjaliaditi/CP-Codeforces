#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    int i,j,k;

    for(i=0;i<t;i++){
        int n,s,r;
        cin >> n >> s >> r;
        k = r;

        int ans[n];

        ans[0] = s-r;

        for(j=1;j<n;j++){
            ans[j] = 1;
            }

        r -= (n-1);

          for(j=1;j<n;j++){
                while(r>0 && (ans[j] < (ans[0]))){
                    ans[j]++;
                    r--;
                }

                if(r<=0)
                    break;
            }




        for(k=0;k<n;k++)
            cout << ans[k] << " ";

        cout << "\n";
    }
}
