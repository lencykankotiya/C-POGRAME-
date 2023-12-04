#include<stdio.h>
void main()
{
	int a,sum=0,n;
	printf("Enter n = ");
	scanf("%d",&n);
	a=1;
	while(a<=n)
	{
		sum+=a;
		printf("%d\t",a);
		a++;
	}
	printf("=%d",sum);
	printf("\n\n odd no sum \n\n");
	a=0,sum=0;
	while(a<n)
	{
		sum=sum+a;
		printf("%d\t",a);
		a+=2;
	}
	printf("=%d",sum);
	printf("\n\n even no sum \n\n");
	a=1,sum=0;
	while(a<n)
	{
		sum=sum+a;
		printf("%d\t",a);
		a+=2;
	}
	printf("=%d",sum);
}