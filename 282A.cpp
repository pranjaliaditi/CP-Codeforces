#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X = 0, n,i;
    cin>> n;

    string s1("X++");
    string s2("++X");
    string s3("--X");
    string s4("X--");

    for(i=0;i<n;i++)
    {
        string str;
        cin>> str;

        int cmp = str.compare(s1);

        if (cmp == 0)
            X++;

        else
        {
            cmp = str.compare(s2);

              if (cmp == 0)
                X++;

                else
                {
                    X--;
                }
        }
    }

    cout<< X;
    return 0;
}
