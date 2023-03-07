#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int i,j,k;
    int x[t], y[t];
    for(i=0;i<t;i++){
            x[i] = -1;
            y[i] = -1;

            int l,r;
            cin >> l >> r;
            int nr = r;
            int nl = l;

            /*for(;nl<r;nl++){
                for(nr = r; nr > nl; nr --){
                    if((nr%nl == 0) && (nr != nl)){
                        x[i] = nl;
                        y[i] = nr;
                        break;
                    }
                }

                if(x[i] != -1 && y[i] != -1)
                    break;
            }*/
            j = 1;
            while((l*j)<=r){
                if(l*j <= r && (l != (l*j))){
                    x[i] = l;
                    y[i] = l*j;
                    break;
                }
                else
                    j++;
            }

    }

    for(i=0;i<t;i++){
        cout << x[i] << " " << y[i] << "\n";
    }
}
