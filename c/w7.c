#include<stdio.h>
void main()
{
	int a=1,b=1,n,sum=0;
	printf("Enter n = ");
	scanf("%d",&n);
	while(a<=n)
	{
		printf("%d",b);
		if(a<n)
		{
			printf("+");
		}
		sum=sum+b;
		a++;
	}
	printf("=%d",sum);
}
/*
Enter n = 10
1+1+1+1+1+1+1+1+1+1=10
*/