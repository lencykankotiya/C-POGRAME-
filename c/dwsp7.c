#include<stdio.h>
void main()
{
	int a,b,c;
	a=5;
	do
	{
		b=0;
		do
		{
			printf(" ");
			b++;
		}while(b<=5-a);
		c=1;
		do
		{
			printf("*");
			c++;
		}while(c<=2*a-1);
		printf("\n");
		a--;
	}while(a>=1);
}
/*
 *********
  *******
   *****
    ***
     *
*/