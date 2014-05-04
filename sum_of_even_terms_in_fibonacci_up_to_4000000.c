#include <stdio.h>
#define limit 4000000
int main()
{
	int sem=0,f1=1,f2=1,f3,sum;
	
	while(f1<limit)
	{
		sem = sem + 1;
		if (sem >= 3)
		{
			sum = sum + f1;
			sem = 0;
		}
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	printf("Sum of even terms = %d",sum); 
	return 0;
}
