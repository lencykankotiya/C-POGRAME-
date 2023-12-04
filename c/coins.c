#include <stdio.h>
int convert(int a) 
{
	int h,f,tv,tn,fi,tw,o;
    h=a/100;
	printf("100 %d\t",h);
	a=a%100;
	f=a/50;
	printf("50 %d\t",f);
	a=a%50;
	tv=a/20;
	printf("20 %d\t",tv);
	a=a%20;
	tn=a/10;
	printf("10 %d\t",tn);
	a=a%10;
	fi=a/5;
	printf("5 %d\t",fi);
	a=a%5;
	tw=a/2;
	printf("2 %d\t",tw);
	a=a%2;
	o=a/1; 
	printf("1 %d\t",o);
}
void main() 
{
    int a,h,f,tv,tn,fi,tw,o,ans;
    printf("Enter an amount = ");
    scanf("%d", &a);
    convert(a);
	//printf("%d",ans);
}