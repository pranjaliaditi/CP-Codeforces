#include <stdio.h>
#include <math.h>

int main(void) {
	
	long t;
	scanf("%ld", &t);
	
	unsigned int i, x[t], y[t]; unsigned long n[t], r[t], prem[t], norm[t];
	
	for(i=0;i<t;i++)
	{
	    scanf("%d", &x[i]);
	    scanf("%d", &y[i]);
	    scanf("%ld", &n[i]);
	    scanf("%ld", &r[i]);
	}
	
	for(i=0;i<t;i++)
	{
	    if(n[i] * x[i] > r[i])
	    {
	        printf("-1 \n");
	        continue;
	    }
	    
	    else if(r[i] >= (n[i] * y[i]))
	    {
	        prem[i] = n[i];
	    }
	    
	    else
	    {
	    double k = (r[i] - (x[i] * n[i])) / (y[i] - x[i]);
	    prem[i] = ceil(k);
	    }
	  
	    norm[i] = n[i] - prem[i];
	    printf("%ld %ld \n", norm[i], prem[i]);
	}
	
	
	return 0;
}

