#include<stdio.h>
void main()
{
	int a,b,c,d=9,e=0;
	for(a=0;a<5;a++)
	{
		for(b=0;b<d;b++)
		{
			printf(" ");
		}
		d=d-2;
		for(c=0;c<=e;c++)
		{
			printf("* ");
		}
		e=e+2;
		printf("\n");
	}
}