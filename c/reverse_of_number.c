#include <stdio.h>
int reverse(int n) 
{
    int rev=0,i;
    for(i=n;i!=0;i/=10)
	{
		rev=rev*10+i%10;
	}
    return rev;
}
void main() 
{
    int n;
    printf("Enter a number to reverse: ");
    scanf("%d", &n);
    printf("reverse = %d",reverse(n));
}