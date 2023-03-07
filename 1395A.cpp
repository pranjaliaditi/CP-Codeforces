#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
int i,j,k;
for(i=0;i<t;i++){
    int r,g,b,w;
    cin >> r >> g >> b >> w;
    int odd = 0, ow = 0;

    if(r%2 == 1)
        odd++;
    if(g%2 == 1)
        odd++;
    if(b%2 == 1)
        odd++;

    if(w%2 == 1)
        ow++;

        if(r==0 || b == 0 || g == 0){

            if(odd+ow <= 1)
                cout << "yes\n";
            else
                cout << "no\n";
        }

        else
        {
            if(odd+ow <= 1)
                cout << "yes\n";
            else
                {
                    odd = 0;
                    ow = 0;
                    r--;
                    g--;
                    b--;
                    w += 3;

                    if(r%2 == 1)
        odd++;
    if(g%2 == 1)
        odd++;
    if(b%2 == 1)
        odd++;

    if(w%2 == 1)
        ow++;

             if(odd+ow <= 1)
                cout << "yes\n";
            else
                cout << "no\n";
                }

        }


}
}
