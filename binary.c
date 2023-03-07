#include <stdio.h>
#include <stdlib.h>

int main()
{
    long t;
    scanf("%ld", &t);
    long i,j,k, m[t], n[t];
    long a[2000], b[2000];

    for(i=0;i<t;i++)
    {
        scanf("%ld",&n[i]);
        scanf("%ld",&m[i]);

            scanf("%ld", &a[i]);
        
            scanf("%ld", &b[i]);
    }

    for(i=0;i<t;i++)
    {
        long a1n[50], a1x[50];
        long b1[50];
        
        long o,p;
        o = a[i];
        p = b[i];
        
        int oa=0,ob=0,za=0,zb=0;
        
        for(j=n[i]-1;j>=0;j--)
        {
            a1n[j] = o%10;
            a1x[j] = o%10;
            o = o/10;
            if(a1n[j] == 0)
            za++;
            else
            oa++;
        }
        
        for(j=m[i]-1;j>=0;j--)
        {
            b1[j] = p%10;
            p = p/10;
            if(b1[j] == 0)
            zb++;
            else
            ob++;
        }
        
        if(oa < ob || za < zb)
        {
            printf("NO \n");
            continue;
        }

        int max,min;

        // operation 1

        for(j=0;j<(n[i]-m[i]);j++)
        {
            min = (a1n[0]<a1n[1])?a1n[0]:a1n[1];
            a1n[0] = min;
            for(k=2;k<n[i]-j;k++)
                a1n[k-1] = a1n[k];
        }

        for(k=0;k<m[i];k++)
        {
            if(a1n[k] != b1[k])
                {
                    break;
                }
        }

        if(k == m[i])
            printf("YES \n");

        else
        {
            // operation 2
            
             for(j=0;j<(n[i]-m[i]);j++)
        {
            max = (a1x[0]>a1x[1])?a1x[0]:a1x[1];
            a1x[0] = max;
            for(k=2;k<n[i]-j;k++)
                a1x[k-1] = a1x[k];
        }

        for(k=0;k<m[i];k++)
        {
            if(a1x[k] != b1[k])
                {
                    break;
                }
        }
             if(k == m[i])
            printf("YES \n");

            else
                printf("NO \n");
        }

    }

    return 0;
}
