#include <stdio.h>
#define limit 1000
int main()
{
	int a=0,b=0,sum=0;
	while(a<limit-3)
	{
		a = a + 3;
		sum = sum + a;
		if (b<limit-5)
		{
			b = b + 5;
			sum = sum + b ;
		}
	}
	printf("Sum = %d",sum);
	return 0;
}
