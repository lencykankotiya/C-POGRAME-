#include<stdio.h>
void main()
{
	int a=65;
	while(a<=90)
	{
		if(a%2!=0)
		{
			printf("%c",a);
		}
		else
		{
			printf("\t");
		}
		a++;
	}
}
/*
A C E G I K M O Q S U W Y
*/