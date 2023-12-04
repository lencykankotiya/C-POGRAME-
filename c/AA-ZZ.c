#include<stdio.h>
void main()
{
	int i,k,j;
	printf("Print A to Z\n\n");
	for(i=65;i<=90;i++)
	{
		printf("%c\t",i);
	}

	printf("\n\n Print A-65 to Z-90\n\n");
	for(k=65;k<=90;k++)
	{
		printf("%c-%d\t",k,k);
	}

	printf("\n\n Print A-a to Z-z\n");
	for(j=65;j<=90;j++)
	{
		printf("%c-%c\t",j,j+32);
	}
}