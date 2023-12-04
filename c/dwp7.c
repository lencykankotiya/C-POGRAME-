#include<stdio.h>
void main()
{
	int a,b;
	a=65;
	do
	{
		b=65;
		do
		{
			printf("%c",b);
			b++;
		}while(b<=a);
		a++;
		printf("\n");
	}while(a<=69);
	
}
/*
A
AB
ABC
ABCD
ABCDE
*/