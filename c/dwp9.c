#include<stdio.h>
void main()
{
	int a,b,c=65,d;
	d=c+32;
	a=1;
	do
	{
		b=1;
		do
		{
			if(a%2==0)
			{
				printf("%c",c++);
				d++;
			}
			else
			{
				printf("%c",d++);
				c++;
				
			}
			b++;
		}while(b<=a);
		a++;
		printf("\n");
	}while(a<=5);
	
}
/*
a
BC
def
GHIJ
klmno
*/