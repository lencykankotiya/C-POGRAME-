#include<stdio.h>
void main()
{
	// 1,2,4,8,16,32,64...n
	int a,b,c=1;
	printf("Enter b= ");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		printf("%d\t",c);
		c=c*2;
	}
}