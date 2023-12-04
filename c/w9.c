#include<stdio.h>
void main()
{
	int a=1,b;
	printf("Enter b=");
	scanf("%d",&b);
	while(a<=b)
	{
		printf("%d\t",a*a);
		a++;
	}
}
/*
Enter b=7
1 4 9 16 25 36 49 
*/