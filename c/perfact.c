3#include <stdio.h>
int isperfect(int num)
{
    int i,sum=0;
    for(i=1;i<=num/2;i++)
	{
        if(num%i==0)
		{
            sum+=i;
        }
    }
    if(sum==num && num>0)
	{
        return 1;
    }
	else
	{
        return 0;
    }
}
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isperfect(num))
	{
        printf("%d is a perfect number.", num);
    }
	else
	{
        printf("%d is not a perfect number.", num);
    }
}
