#include<stdio.h>
void main()
{
	int a,b,c=1;
	a=1;
	do
	{
		b=1;
		do
		{
			printf("%d",c++);
			b++;
		}while(b<=a);
		a++;
		printf("\n");
	}while(a<=5);
	
}
/*
1
23
456
78910
1112131415
*/