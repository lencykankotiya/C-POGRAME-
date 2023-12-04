#include<stdio.h>
void main()
{
	int a,b,c,d=9,e=0;
	for(a=5;a>0;a--)
	{
		for(b=0;b<5-a;b++)
		{
			printf(" ");
		}
		d=d-2;
		for(c=0;c<=e;c++)
		{
			if(c%2!=0)
			{
				printf(" ");
			}
			else
			{
				printf(" *");
			}
		}
		e=e+2;
		printf("\n");
	}
}