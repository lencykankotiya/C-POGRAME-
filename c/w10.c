#include<stdio.h>
void main()
{
	int a=1,b;
	printf("Enter b = ");
	scanf("%d",&b);
	while(a<=b)
	{
		if(a%2==0)
		{
			printf("%d\t",a*a);
		}
		else
		{
			printf("%d\t",a);
		}
		a++;
	}
}
/*
Enter b = 10
1 4 3 16 5 36 7 64 9 100
*/