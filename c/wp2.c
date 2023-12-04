#include<stdio.h>
void main()
{
	int a,b;
	a=5;
	while(a>=1)
	{
		b=1;
		while(b<=5)
		{
			printf("%d\t",a);
			b++;
		}
		printf("\n");
		a--;
	}
}
/*

5       5       5       5       5
4       4       4       4       4
3       3       3       3       3
2       2       2       2       2
1       1       1       1       1

*/