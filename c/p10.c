#include<stdio.h>
void main()
{
	// 1/1+1/2+1/3+1/4+1/5....
	int a,n;
	printf("Enter n = ");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		printf("1/%d + ",a);
	}
}