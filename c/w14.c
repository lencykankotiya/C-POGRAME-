#include<stdio.h>
void main()
{
	int a=1,n;
	printf("Enter n=");
	scanf("%d",&n);
	while(a<=n)
	{
		printf("+1/%d",a);
		a++;
	}
}
/*
Enter n=10
1+1/2+1/3+1/4+1/5+1/6+1/7+1/8+1/9+1/10
*/