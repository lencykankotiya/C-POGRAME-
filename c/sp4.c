#include<stdio.h>
void main()
{
	int a,b,c;
	for(a=5;a>=1;a--)
	{
		for(b=1;b<=5-a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=a;c++)
		{
			printf("*");
		}
	printf("\n");
	}
}