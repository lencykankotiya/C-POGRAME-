#include<stdio.h>
void main()
{
	int a=1,b;
	a=65;
	while(a<70)
	{
		b=1;
		while(b<=5)
		{
			printf("%c\t",a);
			b++;
		}
		printf("\n");
		a++;
	}
}
/*

A       A       A       A       A
B       B       B       B       B
C       C       C       C       C
D       D       D       D       D
E       E       E       E       E

*/