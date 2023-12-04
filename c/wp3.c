#include<stdio.h>
void main()
{
	int a=1,b;
	printf("\n p3 \n");
	a=5;
	while(a>=1)
	{
		b=1;
		while(b<=5)
		{
			printf("%d\t",b);
			b++;
		}
		printf("\n");
		a--;
	}
}
/*
1       2       3       4       5
1       2       3       4       5
1       2       3       4       5
1       2       3       4       5
1       2       3       4       5
*/