#include<stdio.h>
void main()
{
	int i,j;
	i=1;
	do
	{
		j=1;
		do
		{
			printf("%d",j);
			j++;
		}while(j<=i);
		printf("\n");
		i++;
	}while(i<=5);
}
/*	1
	12
	123
	1234
	12345
*/