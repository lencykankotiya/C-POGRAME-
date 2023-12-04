#include<stdio.h>
void main()
{
	int a,b,n;
	printf("Enter value = ");
	scanf("%d",&n);
	printf("pattern:1\n");
	for(a=1;a<=5;a++)
	{
		printf("\n");
		for(b=5;b>0;b--)
		{
			printf("%d\t",a);
		}
	}
	printf("\n pattern:2\n");
	for(a=5;a>=1;a--)
	{
		printf("\n");
		for(b=1;b<=5;b++)
		{
			printf("%d\t",a);
		}
	}
	printf("\n pattern :3\n");
	for(a=5;a>=1;a--)
	{
		printf("\n");
		for(b=1;b<=5;b++)
		{
			printf("%d\t",b);
		}
	}
	printf("\n pattern : 4 odd number..\n");
	for(a=1;a<=n;a=a+2)
	{
		printf("\n");
		for(b=5;b>0;b--)
		{
			printf("%d\t",a);
		}
	}
	printf("\n pattern : 5 Even number..\n");
	for(a=0;a<=n;a=a+2)
	{
		printf("\n");
		for(b=1;b<=5;b++)
		{
				printf("%d\t",a);
		}
	}
	printf("\n pattern: 6 \n\n");
	for(a=1;a<=25;a=a+0)
	{
		for(b=1;b<=5;b++)
		{
			printf("%d\t",a++);
		}
		printf("\n");
	}
	printf("\npattern : 7 \n\n");
	for(a=11;a<=55;a=a+0)
	{
		for(b=1;b<=5;b++)
		{
			printf("%d\t",a++);
		}
		a=a+5;
		printf("\n");
	}
	printf("\n pattern : 8 \n\n ");
	for(a=65;a<=69;a++)
	{
		printf("\n");
		for(b=5;b>0;b--)
		{
			printf("%c\t",a);
		}
	}
	printf("\n pattern: 9 \n\n");
	for(a=65;a<90;a=a+0)
	{
		for(b=1;b<=5;b++)
		{
			printf("%c\t",a++);
		}
		printf("\n");
	}
}