#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    int i,j,k;
    for(i=0;i<t;i++){
        string s;
        cin >> s;
        int sz = s.length();
        char f = s[0];
        char l = s[sz-1];

            if(f == 'a' && l == 'a'){
                cout << f << " ";
                for(k=1;k<sz-1;k++)
                    cout <<s[k];
                cout << " " << l;
            }

            else if(f == 'a' && l == 'b'){
                    int flag = 0;
                for(k=1;k<sz-1;k++){
                    if(s[k] == 'b')
                    flag = 1;
                }
            if(flag == 0)
                cout << ": (";

            else{
                for(k=0;k<sz-1;k++){
                    if(s[k] != 'b')
                       cout <<s[k];
                    else
                    break;
                }
                    cout << " ";

                for(;k<sz-1;k++){
                    cout << s[k];
                }

                cout << " " << l;
            }

            }

            else if(f == 'b' && l == 'b'){
                    int flag = 0;
                for(k=1;k<sz-1;k++){
                    if(s[k] == 'a')
                    flag = 1;
                }
            if(flag == 0)
                {
                    cout << f << " ";
                    for(k=1;k<sz-1;k++)
                        cout <<s[k];
                    cout << " " << l;

                }

            else{
                for(k=0;k<sz-1;k++){
                    if(s[k] != 'a')
                       cout <<s[k];
                    else
                    break;
                }
                    cout << " ";

                for(;k<sz-1;k++){
                    cout << s[k];
                }

                cout << " " << l;
            }

            }
            else if(f == 'b' && l == 'a'){
                    int flag = 0;
                for(k=1;k<sz-1;k++){
                    if(s[k] == 'b')
                    flag = 1;
                }
            if(flag == 0)
                cout << ": (";

            else{
                    cout << f;
                for(k=1;k<sz-1;k++){
                    if(s[k] != 'b')
                       cout <<s[k];
                    else
                    break;
                }
                    cout << " ";

                for(;k<sz-1;k++){
                    cout << s[k];
                }

                cout << " " << l;
            }

            }


        cout << "\n";
    }

    return 0;
}
