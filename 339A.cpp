#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i,j,k;
    int ones = 0, two = 0, three = 0, flag1 = 0, flag2 = 0;
    for(i = 0 ; i< s.length() ; i++)
    {
        if(s[i] == '1')
            ones++;
        if(s[i] == '2')
            two++;
        if(s[i] == '3')
            three++;
    }

        for(j = 0 ; j< ones ; j++)
        {
            cout << '1' ;

            if(j != ones-1 || two != 0 || three != 0)
                cout << '+';

            flag1 = 1;
        }
        for(j = 0 ; j< two ; j++)
        {

            cout << '2' ;

            if(j != two-1 || three != 0)
                cout << '+';

            flag2 = 1;
        }

        for(j = 0 ; j < three ; j++)
        {

            cout << '3' ;
            if(j != three-1)
                cout << '+';
        }


    return 0;
}
