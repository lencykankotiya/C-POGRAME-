#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,n,no,rem,sum=0;
	printf("Enter n = ");
	scanf("%d",&n);
	no=n;
	for(a=1;n>0;a++)
	{
		n=n/10;
	}
	n=no;
	for(b=1;no>0;b++)
	{
		rem=no%10;
		sum=sum+pow(rem,a-1);
		rem=no/10;
	}
	if(sum==n)
	{
		printf("%d is armstrong number",n);
	}
	else
	{
		printf("%d is not a armstrong number",n);
	}
}