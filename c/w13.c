#include<stdio.h>
void main()
{
	int a=1,b,c=1,d=0,e;
	printf("Enter b=");
	scanf("%d",&b);
	while(a<=b)
	{
		e=c+d;
		printf("%d\t",e);
		c=d;
		d=e;
		a++;
	}
}
/*
1 1 2 3 5 8 13 21 34 55
*/