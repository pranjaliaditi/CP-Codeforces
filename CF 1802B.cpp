#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
int i,j ,k;
for(i=0;i<t;i++){
    int n;
    cin >> n;
    int b[n];
    int cntav = 0;
    int cntpg = 0;
    int extra = 0;
    int total_pigs = 0;
    int used = 0;

    for(j=0;j<n;j++){
            cin >> b[j];
    }

    for(j=0;j<n;j++){

        if(b[j] == 2 && cntpg == 0)
            continue;

        else
            {
            if(b[j] == 1)
                {   total_pigs++;
                    cntpg++;
                }

            else
            {
                     cntav = cntav + max((cntpg - extra), 0);
                     used = (total_pigs/2) + 1;
                     extra = cntav - used;
                     cntpg = 0;
            }
        }
    }

    if(cntpg > extra)
    cntav += (cntpg-extra);

    cout << cntav << "\n";
}

}
