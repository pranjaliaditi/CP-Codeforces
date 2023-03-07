#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    long i,j,k;
    long ans[t];
    for(i=0;i<t;i++){
        long n;
        cin >> n;
        long a[n];
        long even=0,odd=0;
        for(j=0;j<n;j++){
            cin >> a[j];

            if(a[j] %2 == 0)
                even++;

            else
                {
                    odd++;
                }
        }

        long sodd,ote,eto,seve;

         for(j=0;j<n;j++){
            if((a[j] % 2 == 1))
                {
                    sodd = a[j];
                    break;
                }
        }

           for(j=0;j<n;j++){
            if((a[j] % 2 == 0))
                {
                    seve = a[j];
                    break;
                }
        }

        for(j=0;j<n;j++){
            if((sodd >= a[j]) && (a[j] % 2 == 1))
                sodd = a[j];

            if((seve >= a[j]) && (a[j] % 2 == 0))
                seve = a[j];

        }

        if((odd % 2 == 0))
            ans[i] = 0;

        else{
            for(ote = 0;odd!=0;){
                sodd = floor(sodd/2);
                ote++;
            if(sodd %2 == 0)
                break;
            }

            for(eto = 0;even!=0;){
                seve = floor(seve/2);
                eto++;
            if(seve %2 == 1 || seve == 0)
                break;
            }

            if(odd!=0 && even !=0)
            {
                 if(ote <= eto)
                            ans[i] = ote;
                        else
                            ans[i] = eto;
            }
           if(even == 0)
            ans[i] = ote;
        }
    }

    for(i=0;i<t;i++)
        cout << ans[i] << "\n";
}
