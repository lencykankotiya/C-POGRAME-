#include<stdio.h>
void main()
{
	int a;
	printf("Enter a = ");
	scanf("%d",&a);
	void div()
	{
		printf("A is divisible by 5 and 3 ");
	}
	void ndiv()
	{
		printf("A is not divisible by 5 and 3 ");
	}
	if(a%5==0 && a%3==0)
	{
		div();
	}
	else
	{
		ndiv();
	}
	
}