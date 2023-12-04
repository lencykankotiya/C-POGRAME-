#include<stdio.h>
void main()
{
	int a,b,new,f=1;
	printf("Enter b=");
	scanf("%d",&b);
	a=1;
	do
	{
		new=a*f;
		printf("%d\t",new);
		f*=2;
		a++;
	}while(a<=b);
}
// 1 4 12 32 80 