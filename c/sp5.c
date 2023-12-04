#include<stdio.h>
void main()
{
	int a,b,c,d=11,e=0;
	for(a=0;a<6;a++)
	{
		for(b=1;b<=d;b++)
		{
			printf(" ");
		}
		d=d-2;
		for(c=0;c<=e;c++)
		{
			if(c%2!=0)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		e=e+2;
		printf("\n");
	}
}