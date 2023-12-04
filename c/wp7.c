#include<stdio.h>
void main()
{
	int a=1,b;
	a=11;
	while(a<=55)
	{
		b=1;
		while(b<=5)
		{
			printf("%d\t",a++);
			b++;
		}
		printf("\n");
		a+=5;
	}
}
/*
 s
11      12      13      14      15
21      22      23      24      25
31      32      33      34      35
41      42      43      44      45
51      52      53      54      55
*/