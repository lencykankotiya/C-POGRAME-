#include<stdio.h>
void main()
{
	//n=40 1,2,4,5,8,10,20
	int i,j,n,sum=0;
	printf("Enter n = ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d\t",i);
			sum=sum+i;
		}
	}
	printf("\nsum = %d",sum);
}