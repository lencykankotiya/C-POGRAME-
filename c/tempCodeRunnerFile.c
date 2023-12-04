#include<stdio.h>
int fibo(int num)
{    
    if(num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        return fibo(num-1) + fibo(num-2);
    }
}
void main()
{    
    int value,i;

    printf("Enter terms: ");
    scanf("%d", &value);       

    for(i=1;i<value;i++)
    {
        printf("%d ", fibo(i));
    }
}