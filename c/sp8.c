#include<stdio.h>
void main()
{
	int a,b,c=5;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(b<=c-a)
			{
				printf(" ");
			}
			else
			{
				printf(" *");
			}
		}
		printf("\n");
	}
	for(a=4;a>=0;a--)
	{
		for(b=1;b<=5-a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=a;c++)
		{
			printf(" *");
		}
	printf("\n");
	}
}