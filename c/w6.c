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
		b=(b*10)+1;
		a++;
	}
	printf("\n sum =%d",sum);
}
/*
1+11+111+1111+11111
 sum =12345
 */