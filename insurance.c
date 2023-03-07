#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d", &t);
	
	int i, x[t], y[t], r[t];
	
	for(i=0;i<t;i++)
	{
	    scanf("%d", &x[i]);
	    scanf("%d", &y[i]);
	}
	
	for(i=0;i<t;i++)
	{
	    if(x[i]>=y[i])
	    r[i] = y[i];
	    
	    else
	    r[i] = x[i];
	}
	
	for(i=0;i<t;i++)
	printf("%d \n", r[i]);
	
	return 0;
}

