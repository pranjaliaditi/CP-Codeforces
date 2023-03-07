#include <bits/stdc++.h>
using namespace std;
int main()
{
    long x;
    cin >> x;
    long ans;
    long one,two,three,four,five;
    five = x/5;
    x -= (five*5);
    four = x/4;
    x -= (four*4);
    three = x/3;
    x -= (three * 3);
    two = x/2;
    x-= (two * 2);
    one = x/1;
    x-=(one*1);

    if(x == 0)
        cout << (one+two+three+four+five);
}
