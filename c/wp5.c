#include<stdio.h>
void main()
{
	int i=1,j;
	while(i<=10)
	{
		j=1;
		while(j<=5)
		{
			if(i%2==0)
			{
				printf("%d\t",i);
			}
			j++;
		}
		if(i%2==1)
		{
		printf("\n");
		}
		i++;
	}
}
/*

2       2       2       2       2
4       4       4       4       4
6       6       6       6       6
8       8       8       8       8
10      10      10      10      10

*/