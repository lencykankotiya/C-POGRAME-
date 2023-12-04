#include<stdio.h>
void main()
{
	//1+1+1+1+1+1=sum
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
	}
	printf(" = %d",sum);
}