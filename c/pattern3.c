#include<stdio.h>
void main()
{
	// 1,4,9,16,25,36,49,64,81,100
	// 1,4,3,16,5,36,7,64,9,100
	// 1,2,4,8,16,32,64,128,256,512
	// A,C,E,G,I,K,M,O,Q,S,U,W,Y
	// 1,1,2,3,5,8,13,21,34,55,89
	int a,b,c=1,d=0,e=0,f=1,g;
	float i,old=0.5,new;
	printf("Enter b = ");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		printf("%d\t",a*a);
	}
	printf("\n\n");
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
	printf("\n\n");
	for(a=1;a<=b;a++)
	{
		printf("%d\t",c);
		c=c*2;
	}
	printf("\n\n");
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
	printf("\n\n");
	printf("%d\t",f);
	for(a=1;a<=b;a++)
	{
		g=e+f;
		printf("%d\t",g);
		e=f;
		f=g;
	}
}