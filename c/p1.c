#include<stdio.h>
void main()
{
	// 1,4,12,32,80,,,
	int a,b,new,f=1;
	printf("Enter b = ");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		new=a*f;
		printf("%d\t",new);
		f=f*2;
	}
	printf("\n2nd pattern \n");
	
}