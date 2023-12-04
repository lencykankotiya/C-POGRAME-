#include<stdio.h>
void main()
{
	// A C E G I K M....
	int a;
	for(a=65;a<=90;a++)
	{
		if(a%2!=0)
		{
			printf("%c",a);
		}
		else
		{
			printf("\t");
		}
	}
}