#include<stdio.h>
void main()
{
	int i,j;
	i=5;
	do
	{
		j=5;
		do
		{
			printf("%d",j);
			j--;
		}while(j>=i);
		printf("\n");
		i--;
	}while(i>0);
}
/*
5
54
543
5432
54321
*/