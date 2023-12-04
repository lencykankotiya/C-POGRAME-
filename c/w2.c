#include<stdio.h>
void main()
{
	int a=1,n,b;
	printf("enter n = ");
	scanf("%d",&n);
	printf("\n\n -n to n \n\n");
	b=-n;
	while(b<=n)
	{
		printf("%d\t",b);
		b++;
	}
	printf("\n\n odd no \n\n");
	while(a<=n)
	{
		if(a%2==0)
		{
			printf("%d\t",a);
		}
		a++;
	}
	printf("\n\n even no \n\n");
	a=1;
	while(a<=n)
	{
		if(a%2==1)
		{
			printf("%d\t",a);
		}
		a++;
	}
}