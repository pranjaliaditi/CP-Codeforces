#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int i,j,m;
    for(i=0;i<t;i++){
        int n,k;
        cin >> n >> k;
        int l[n], r[n];
        for(j=0;j<n;j++)
            cin >> l[j] >> r[j];

        vector <int> num(50,0);
        for(j=0;j<n;j++){
                if(k >= l[j] && k <= r[j])
            {
                for(m=l[j]-1;m<r[j];m++){
                num[m]++;
                }
            }
        }

        int check = 0;

        for(j=0;j<50;j++){

            if(num[j] >= num[k-1] && j!= (k-1))
                {    check = 1;
                    cout << "NO\n";
                    break;
                }
        }

        if(check == 0)
            cout << "YES \n";

    }
}
