#include<stdio.h>
void main()
{
	int a,b;
	a=5;
	do
	{
		b=a;
		do
		{
			printf("%d",b);
			b++;
		}while(b<=5);
		printf("\n");
		a--;
	}while(a>=1);
}
/*
5
45
345
2345
12345
*/