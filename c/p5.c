#include<stdio.h>
void main()
{
	// 1,4,9,16,25,36,49....n
	int a,b;
	printf("Enter b = ");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		printf("%d\t",a*a);
	}
}