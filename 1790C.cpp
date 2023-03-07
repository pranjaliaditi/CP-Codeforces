#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    int i,j,k;

    for(i=0; i<t; i++){
        int n;

        cin >> n;

        int ans[n];

        int p[n][n];


        for(j=0;j<n;j++){
            for(k=0;k<n-1;k++){
                    int in;
                    cin >> p[j][k];
            }
        }

        int ans_ind = 0;

        // first element

            int cnt1 = 0;
            int cnt2 = 0;
            int  n2;
            int n1 = p[0][0];

            for(k=1;k<n;k++){
                    if(p[k][0] == n1)
                        cnt1++;

                    else
                        {
                            cnt2++;
                            n2 = p[k][0];
                        }

                    if(cnt2 > cnt1){
                        ans[ans_ind] = n2;
                        ans_ind++;
                        j++;
                        ans[ans_ind] = n1;
                        ans_ind++;
                        j++;
                    }

                    else{
                        ans[ans_ind] = n1;
                        ans_ind++;
                        j++;
                        ans[ans_ind] = n2;
                        ans_ind++;
                        j++;
                    }

            }

            // middle elements

        for(j=0;j<n-2;){
           cnt1 = 0;
             cnt2 = 0;
              n2;
             n1 = p[0][j];

            for(k=1;k<n;k++){
                    if(p[k][j] == n1)
                        cnt1++;

                    else
                        {
                            cnt2++;
                            n2 = p[k][j];
                        }

                    if(cnt2 > cnt1 || (ans[ans_ind-1]!=p[j][k])){
                        ans[ans_ind] = n2;
                        ans_ind++;
                        j++;
                    }

                    else{
                        ans[ans_ind] = n1;
                        ans_ind++;
                        j++;
                    }

            }
        }

        // for last element

         cnt1 = 0;
             cnt2 = 0;
             n2;
             n1 = p[0][n-2];

            for(k=1;k<n;k++){
                    if(p[0][k] == n1)
                        cnt1++;

                    else
                        {
                            cnt2++;
                            n2 = p[0][k];
                        }

                    if(cnt2 > cnt1){
                        ans[ans_ind] = n2;
                        ans_ind++;
                        j++;
                    }

                    else{
                        ans[ans_ind] = n1;
                        ans_ind++;
                        j++;
                    }

            }


        for(j=0;j<n;j++)
            cout << ans[j] << " ";

        cout << "\n";

    }
}
