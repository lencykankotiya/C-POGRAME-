#include<stdio.h>
void main()
{
	int a,b,add,sub,mul,div;
	char choice;
	printf("Enter a = ");
	scanf("%d",&a);
	printf("Enter b = ");
	scanf("%d",&b);
	int add()
	{
		return a+b;
	}
	void sub()
	{
		return a-b;
	}
	void mul()
	{
		return a*b;
	}
	void div()
	{
		return a/b;
	}
	printf("you perform wich function = ");
	scanf("%d",&choice);
	if(choice==add)
	{
		add=add();
		printf("%d",add);
	}
	else if(choice==sub)
	{
		sub=sub();
		printf("%d",sub);
	}
	else if(choice==mul)
	{
		mul=mul();
		printf("%d",mul);
	}
	else
	{
		div=div();
		printf("%d",div);
	}
	
}