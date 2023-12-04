#include<stdio.h>
void main()
{
	// 1,4,3,16,5,36...n
	int a,b;
	printf("Enter b= ");
	scanf("%d",&b);
	
	for(a=1;a<=b;a++)
	{
		if(a%2==0)
		{
			printf("%d\t",a*a);
		}
		else
		{
			printf("%d\t",a);
		}
	}
}