#include<stdio.h>
void main()
{
	int a,b,c=65;
	a=1;
	do
	{
		b=1;
		do
		{
			printf("%c",c++);
			b++;
		}while(b<=a);
		a++;
		printf("\n");
	}while(a<=5);
	
}
/*
A
BC
DEF
GHIJ
KLMNO
*/