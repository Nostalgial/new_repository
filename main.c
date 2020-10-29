#include <stdio.h>
#include "max.h"
#include "sum.h"
int main()
{
	int a=10,b=12,c;
	c = max(a,b);
         printf("max of %d and %d is %d\n",a,b,c);
  	c = sum(a,b);
        printf("%d+%d=%d\n",a,b,c);

	return 0;
}
