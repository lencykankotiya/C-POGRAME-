#include<stdio.h>
void main()
{
	int a=1,b,c=1,d=51,e=99;
	printf("Enter b = ");
	scanf("%d",&b);
	printf("\n\n program 1 : 1 2 3 4...\n\n");
	while(a<=b)
	{
		printf("%d \t",a);
		a++;
	}
	printf("\n\n program 2 : 10 9 8 7...\n\n");
	while(c<=b)
	{
		printf("%d \t",b);
		b--;
	}
	printf("\n\n program 3 : 51 to 99...\n\n");
	while(d<=e)
	{
		printf("%d \t",d);
		d++;
	}
}