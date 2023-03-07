#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int d,dx,dy, ans = 0;

    if(x1 == x2 && y1 == y2)
       cout << -1;

    else

    {   if(x1 == x2)
    {
        d = abs(y1-y2);
        x3 = x1 + d;
        x4 = x2 + d;
        y3 = y1;
        y4 = y2;

        dx = abs(y1 - y2);
        dy = abs(x1 - x3);
        if(dx != dy)
            ans = -1;
    }

    else if(y1 == y2)
    {
        d = abs(x1 - x2);
        x3 = x1;
        y3 = y1 + d;
        x4 = x2;
        y4 = y2 + d;

        dx = abs(x1 - x2);
        dy = abs(y1 - y3);

        if(dx != dy)
            ans = -1;
    }

    else
    {
        float hypsq = ( ( (x1-x2) * (x1-x2) ) + (y1-y2) * (y1-y2) );

        d = (sqrt(hypsq)) / 1.41;

        if(x1 < x2)
        {
            if(y1 < y2)
            {
                x3 = x1;
                y3 = y1 + d;
                x4 = x1 + d;
                y4 = y1;
                 dx = abs(x2 - x3);
                 dy = abs(y2 - y4);
            }

            else
            {
                x3 = x1;
                y3 = y1 - d;
                x4 = x1 +d;
                y4 = y1;
                dx = abs(x2 - x4);
                dy = abs(y2 - y3);
            }
        }

        else
        {
            if(y1 < y2)
            {
                x3 = x1;
                y3 = y1 + d;
                x4 = x1 - d;
                y4 = y1;
                dx = abs(x4 - x2);
                dy = abs(y2 - y3);
            }

            else
            {
                x3 = x1;
                y3 = y1 - d;
                x4 = x1 - d;
                y4 = y1;
                dx = abs(x2 - x4);
                dy = abs(y2 - y3);
            }
        }


        //dx = abs(x1 - x3);
        //dy = abs(y2 - y3);

          if(dx != dy )
                ans = -1;

          //cout << d << "\n";

    }


    if (ans != 0)
        cout << ans;

    else
    cout << x3 << " " << y3 << " " << x4 << " " << y4;
    }

    return 0;
}
