#include<stdio.h>
void main()
{
	// 1+11+111+1111=sum
	int i,j=1,n,sum=0;
	printf("Enter n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",j);
		if(i<n)
		{
			printf("+");
		}
		sum=sum+j;
		j=(j*10)+1;
	}
	printf("\nsum=%d",sum);
}