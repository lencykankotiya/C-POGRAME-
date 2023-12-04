// prime number
#include<stdio.h>
void main()
{
	int a,n,ans=0;
	printf("Enter n = ");
	scanf("%d",&n);
	for(a=2;a<n;a++)
	{
		if(n%a==0)
		{
			ans+=1;
		}
	}
	if(ans==0)
	{
		printf("%d is prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
	}
}