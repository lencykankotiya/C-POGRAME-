#include<stdio.h>
void main()
{
	int a,b;
	a=5;
	do
	{
		b=1;
		do
		{
			if(b<=5-a)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
			b++;
		}while(b<=5);
		printf("\n");
		a--;
	}while(a>=1);
}
/*
*****
 ****
  ***
   **
    *
*/