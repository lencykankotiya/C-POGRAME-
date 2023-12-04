#include<stdio.h>
void main()
{
	int a,b,c=5;
	a=0;
	do
	{
		b=0;
		do
		{
			if(b<=c-a)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
			b++;
		}while(b<=5);
		b=0;
		do
		{
			printf("*");
			b++;
		}while(b<=a);
		printf("\n");
		a++;
	}while(a<=5);
}
/*
      *
     ***
    *****
   *******
  *********
 ***********
*/