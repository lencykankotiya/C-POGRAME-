#include<stdio.h>
void main()
{
	int a,b,i,j;
	printf("Enter a = ");
	scanf("%d",&a);
	//printf("Enter b = ");
	//scanf("%d",&b);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			if(i==1||i==a||j==1||j==a)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}