#include<stdio.h>
void main()
{
	int a,n,ans=0,sum=0;
	printf("\n Enetr n = ");
	scanf("%d",&n);
	printf("10 to 1\n\n");
	for(a=10;a>=1;a--)
	{
		printf("%d\t",a);
	}
	printf("\n 51 to 99\n\n");
	for(a=51;a<=99;a++)
	{
		printf("%d\t",a);
	}
	printf("\n 1 to n \n\n");
	for(a=1;a<=n;a++)
	{
		printf("%d\t",a);
	}
	printf("\n -n to n \n\n");
	for(a=-n;a<=n;a++)
	{
		printf("\t%d",a);
	}
	printf("\n sum of 1 to 10\n\n");
	for(a=1;a<=10;a++)
	{
		printf("%d\t",a);
		ans+=a;
	}
	printf("=%d",ans);
	printf("\n sum od odd no\n\n");
	for(a=0;a<n;a+=2)
	{
		printf("%d\t",a);
		sum+=a;
	}
	printf("=%d \n",sum);
	printf("sum of even no\n\n");
	for(a=1;a<n;a+=2)
	{
		printf("%d\t",a);
		sum+=a;
	}
	printf("=%d \n",sum);
}