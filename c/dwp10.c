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
			if(b%2==1)
			{
				printf("%c",d++);
				c++;
			}
			else
			{
				printf("%c",c++);
				d++;
				
			}
			b++;
		}while(b<=a);
		a++;
		printf("\n");
	}while(a<=5);
	
}
/*
a
bC
dEf
gHiJ
kLmNo
*/