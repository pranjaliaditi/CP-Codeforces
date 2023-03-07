#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sol[n][3];
    
    int i,k;
    for(i=0;i<n;i++)
    { for(k=0;k<3;k++)
    scanf("%d", &sol[i][k]);
    }
    
    int cnt=0,c=0;
    
    for(i=0;i<n;i++)
    {
        cnt = 0;
        for(k=0;k<3;k++)
        {if(sol[i][k] == 1)
        cnt++;
        }
        
        if(cnt>=2)
        c++;
  
    }
    
    printf("%d",c);
}