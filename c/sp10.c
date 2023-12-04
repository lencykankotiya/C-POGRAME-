#include<stdio.h>
void main()
{
	int a,b,i,j;
	printf("Enter a = ");
	scanf("%d",&a);
	printf("Enter b = ");
	scanf("%d",&b);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=b;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=a;i>=1;i--)
	{
		for(j=1;j<=a-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=b;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
}