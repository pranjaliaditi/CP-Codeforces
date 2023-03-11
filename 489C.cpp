#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,s;
    cin >> m >> s;
    int i,j,k;
    int dig[m] = {0};

    int nines = s/9;
    int rem = s % 9;
    int no_dig = (s/10 )+ 1;
    int cnt;

    if( m < no_dig || s > ( m*9 ) || ( m > 1 && s == 0 ) )
        cout << -1 << " " << -1;


    else{
            //min

            i = m-1;

            if(rem == 0 && nines != 0){
                rem = 9;
                nines = nines-1;
            }



                 for( cnt = 0; cnt < nines; ){

                        dig[i] = 9;
                        i--;
                        cnt++;
                    }




            if( m > (nines+1) ){
                dig[0] = 1;
                dig[i] = rem-1;
            }

            else{
                dig[i] = rem;
            }

            for(i=0;i<m;i++)
                cout << dig[i];

            cout << " ";


            //max

            nines = s/9;
            rem = s%9;

            for(i=0;i<nines;i++)
                dig[i] = 9;

            dig[i] = rem;

            for(i++; i<m; i++){
                dig[i] = 0;
            }

            for(i=0;i<m;i++)
                cout << dig[i];
            }


}
