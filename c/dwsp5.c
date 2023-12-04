#include<stdio.h>
void main()
{
	int a,b,c,d=11,e=0;
	a=0;
	do
	{
		b=1;
		do
		{
			printf(" ");
			b++;
		}while(b<=d);
		d=d-2;
		c=0;
		do
		{
			if(c%2==1)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
			c++;
		}while(c<=e);
		e=e+2;
	printf("\n");
	a++;
	}while(a<6);
}
/*

            *
          *   *
        *   *   *
      *   *   *   *
    *   *   *   *   *
*/