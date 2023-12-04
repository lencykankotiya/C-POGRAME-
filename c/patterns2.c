#include<stdio.h>
void main()
{
	int a,b,c=1,d=65,e=97,k=1;
	printf("Pattern : 1");
	for(a=1;a<=6;a++)
	{
		printf("\n");
		for(b=1;b<a;b++)
		{
			printf("%d",b);
		}
	}
	printf("\n\nPattern : 2");
	for(a=1;a<6;a++)
	{
		printf("\n");
		for(b=0;b<a;b++)
		{
			printf("%d",a);
		}
	}
	printf("\n\nPattern : 3");
	for(a=5;a>=1;a--)
	{
		printf("\n");
		for(b=5;b>=a;b--)
		{
			printf("%d",a);
		}
	}
	printf("\n\nPattern : 4");
	for(a=5;a>=1;a--)
	{
		printf("\n");
		for(b=5;b>=a;b--)
		{
			printf("%d",b);
		}
	}
	printf("\n\nPattern : 5");
	for(a=65;a<=69;a++)
	{
		printf("\n");
		for(b=65;b<=a;b++)
		{
			printf("%c",b);
		}
	}
	printf("\n pattern : 6");
	for(a=1;a<=5;a++)
	{
		printf("\n");
		for(b=1;b<=a;b++)
		{
			printf("%d",c++);
		}
	}
	printf("\nPattern : 7\n");
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%c",d++);
		}
		printf("\n");
	}
	printf("\nPattern : 8\n");
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%c",e++);
		}
		printf("\n");
	}
	printf("\nPattern : 9\n");
	int p=65,q,r=65,s;
	q=p+32;
	s=p+32;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			if(a%2==0)
			{
				printf("%c",q++);
				p++;
			}
			else
			{
				printf("%c",p++);
				q++;
			}
		}
		printf("\n");
	}
	printf("\nPattern : 10\n");
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			if(b%2!=0)
			{
				printf("%c",s++);
				r++;
			}
			else
			{
				printf("%c",r++);
				s++;
			}
		}
		printf("\n");
	}
	printf("\nPattern : 11\n");
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",k);
			if(k==1)
			{
				k=0;
			}
			else if(k==0)
			{
				k=1;
			}
		}
		printf("\n");
	}
	printf("\n pattern : 12 \n");
	
	
	for(a=5;a>=1;a--)
	{
		for(b=a;b<=5;b++)
		{
			printf("%d",b);
		}
		printf("\n");
	}
	printf("\n pattern : 13 \n");
	for(a=65;a<70;a++)
	{
		for(b=a;b>=65;b--)
		{
			printf("%c",b);
		}
		printf("\n");
	}
}