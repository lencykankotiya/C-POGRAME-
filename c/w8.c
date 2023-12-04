#include<stdio.h>
void main()
{
	int a=1,b,n,sum=0;
	printf("Enter n = ");
	scanf("%d",&n);
	while(a<n)
	{
		if(n%a==0)
		{
			printf("%d\t",a);
			sum=sum+a;
		}
		a++;
	}
	printf("\n sum = %d",sum);
}
/*
Enter n = 50
1       2       5       10      25
 sum = 43
 */