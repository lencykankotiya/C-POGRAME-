#include<stdio.h>
void main()
{
	int a,b,n;
	printf("Enter value = ");
	scanf("%d",&n);
	printf("Odd number\n\n");
	for(a=1;a<=n;a=a+2)
	{
		printf("%d\t",a);
	}
	printf("\n\n\n");
	printf("Even number\n\n");

	for(b=0;b<n;b=b+2)
	{
		printf("%d\t",b);
	}
}