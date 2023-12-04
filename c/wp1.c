#include<stdio.h>
void main()
{
	int a=1,b;
	printf("\n p1 \n");
	while(a<=5)
	{
		b=5;
		while(b>=1)
		{
			printf("%d\t",a);
			b--;
		}
		printf("\n");
		a++;
	}
}
/*

1       1       1       1       1
2       2       2       2       2
3       3       3       3       3
4       4       4       4       4
5       5       5       5       5

*/