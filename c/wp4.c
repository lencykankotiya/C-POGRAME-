#include<stdio.h>
void main()
{
	int i=1,j;
	while(i<=10)
	{
		j=1;
		while(j<=5)
		{
			if(i%2==1)
			{
				printf("%d\t",i);
			}
			j++;
		}
		if(i%2==0)
		{
		printf("\n");
		}
		i++;
	}
}
/*
1       1       1       1       1
3       3       3       3       3
5       5       5       5       5
7       7       7       7       7
9       9       9       9       9
*/