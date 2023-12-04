#include<stdio.h>
void main()
{
	int a=1,b;
	a=65;
	while(a<90)
	{
		b=1;
		while(b<=5)
		{
			printf("%c\t",a++);
			b++;
		}
		printf("\n");
		a+=0;
	}
}
/*

A       B       C       D       E
F       G       H       I       J
K       L       M       N       O
P       Q       R       S       T
U       V       W       X       Y

*/