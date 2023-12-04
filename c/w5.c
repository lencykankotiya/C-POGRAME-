#include<stdio.h>
void main()
{
	int a,n,new,f=1;
	printf("Enter n= ");
	scanf("%d",&n);
	a=1;
	while(a<=n)
	{
		new=a*f;
		printf("%d\t",new);
		f=f*2;
		a++;
	}
}
/* 
1 4 12 32 80 192 */