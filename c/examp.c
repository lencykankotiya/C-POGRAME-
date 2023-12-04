#include<stdio.h>
void main()
{
	int a,b,c,temp,n;
	printf("Enter n=");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=n-a;b++)
		{
			printf(" ");
		}
		temp=1;
		for(c=1;c<=a;c++)
		{
			printf(" %d",temp);
			temp=temp*(a-c)/c;
		}
		printf("\n");
	}
}
/*
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
 */