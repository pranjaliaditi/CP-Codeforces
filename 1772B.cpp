#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int i,j,k, ans[t];
    for(i=0;i<t;i++){
        int tl,tr,bl,br;
        cin >> tl >> tr >> bl >> br;

        int flag = 0;
        ans[i] = 0;
            for(j=0;j<4;j++){
                    int a = tl, b = tr , c=bl, d= br;
                    if((tl<tr) && (bl<br) && (tl<bl) &&(tr<br)){
                        ans[i] = 1;
                        //flag = 1;
                        break;
                    }
                    else{
                            //flag = 1;
                        tr = a;
                        br = b;
                        bl = d;
                        tl = c;
                    }
                    }
            }


    for(i=0;i<t;i++){
        if(ans[i] == 1) cout << "Yes \n";
        else cout << "No \n";
    }
}
