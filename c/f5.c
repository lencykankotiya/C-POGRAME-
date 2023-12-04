#include <stdio.h>
int primenumber(int n) 
{
	int j, flag = 1;
	for (j=2;j<=n/2;j++) 
	{
		if (n%j==0) 
		{
			flag = 0;
		}
	}
	return flag;
}
void main() 
{
	int n1,n2,i,flag;
	printf("Enter two positive integers: ");
	scanf("%d %d", &n1, &n2);
	if (n1 > n2) 
	{
		n1=n1+n2;
		n2=n1-n2;
		n1=n1-n2;
	}
	for (i=n1+1;i<n2;i++) 
	{
		flag=primenumber(i);
		if(flag==1) 
		{
			printf("%d ",i);
		}
	}
}

