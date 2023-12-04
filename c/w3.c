#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("A - Z \n\n");
	a=65;
	while(a<=90)
	{
		printf("%c\t",a);
		a++;
	}
	printf("\n\n A-65 to Z-90 \n\n");
	a=65;
	while(a<=90)
	{
		printf("%c-%d\t",a,a);
		a++;
	}
	printf("\n\n A-a to Z-z \n\n");
	a=65;
	while(a<=90)
	{
		printf("%c-%c\t",a,a+32);
		a++;
	}
}