#include<stdio.h>
void main()
{
	int a,b,c;
	for(a=5;a>=0;a--)
	{
		for(b=1;b<=5-a;b++)
		{
			printf("  ");
		}
		for(c=1;c<=2*a-1;c++)
		{
			printf(" *");
		}
		// for(c=1;c<=a-1;c++)
		// {
			// printf("*");
		// }
	printf("\n");
	}
}