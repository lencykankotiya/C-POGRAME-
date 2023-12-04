#include<stdio.h>
void main()
{
	int i,j;
	i=1;
	do
	{
		j=0;
		do
		{
			printf("%d",i);
			j++;
		}while(j<i);
		printf("\n");
		i++;
	}while(i<=5);
}
/*
1
22
333
4444
55555
*/