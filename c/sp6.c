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
				printf("  ");
			}
			else
			{
				printf(" *");
			}
		}
		for(int b=1;b<=a-1;b++)
		{
			printf(" *");
		}
		printf("\n");
	}
}