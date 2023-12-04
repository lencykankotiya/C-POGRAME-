#include<stdio.h>
void main()
{
	// 1 1 2 3 5 8 13 21 34 55...
	int a,b,c=0,d=1,e;
	printf("Enter b = ");
	scanf("%d",&b);
	printf("%d\t",d);
	for(a=1;a<=b;a++)
	{
		e=c+d;
		printf("%d\t",e);
		c=d;
		d=e;
	}
}