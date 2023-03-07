#include <stdio.h>
#include <string.h>
int main()
{
int n,i,j;
scanf("%d", &n);
char c[n][1000];

for(i=0;i<n;i++)
{
    scanf("%s",&c[i]);
}

for(i=0;i<n;i++)
{
    j = 0;
char f,l;
j = strlen(c[i]);

if(j>10)
{
    f = c[i][0];
    l = c[i][j-1];
printf("%c%d%c\n",f,j-2,l);
}
    else
    printf("%s\n",c[i]);
}

return 0;
}
