#include<stdio.h>
void main()
{
	int a=1,b,c=1;
	printf("Enter b=");
	scanf("%d",&b);
	while(a<=b)
	{
		printf("%d\t",c);
		c=c*2;
		a++;
	}
}
/*
Enter b=10
1 2 4 8 16 32 64 128 256 512
*/