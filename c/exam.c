#include<stdio.h>
void main()
{
	int a,n,ans=1;
	printf("Enter n = ");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		printf("%d * ",a);
		ans*=a;
	}
	printf("\n Ans = %d",ans);
}
/*
1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10 *
 Ans = 3628800
 */