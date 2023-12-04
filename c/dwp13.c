#include<stdio.h>
void main()
{
	int a,b;
	a=65;
	do
	{
		b=a;
		do
		{
			printf("%c",b);
			b--;
		}while(b>=65);
		printf("\n");
		a++;
	}while(a<=69);
}
/*
A
BA
CBA
DCBA
EDCBA
*/