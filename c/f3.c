#include<stdio.h>
void main()
{
	int unit;
	float bill,echarge,bill1;
	printf("enter units = ");
	scanf("%d",&unit);

	int unit1()
	{
		bill=unit*0.60;
		return bill;
	}
	int unit2()
	{
		bill=100*0.60+(unit-100)*0.80;
		return bill;
	}
	int unit3()
	{
		bill=100*0.60+200*0.80+(unit-300)*0.90;
		return bill;
	}
	int unit4()
	{
		bill=50;
		return bill;
	}
	int unit5()
	{
		echarge=bill*0.15;
		printf("charge= %f \n ",echarge);
		bill=bill+echarge;
		return bill;
	}
	if(unit<=100)
	{
		bill1=unit1();
		printf("final bill = %.2f",bill1);
	}
	if(unit>100 && unit<=300)
	{
		bill1=unit2();
		printf("final bill = %.2f",bill1);
	}
	if(unit>300)
	{
		bill1=unit3();
		printf("final bill = %.2f",bill1);
	}
	if(bill<50)
	{
		bill1=unit4();
		printf("final bill = %.2f",bill1);
	}
	if(bill>300)
	{
		bill1=unit5();
		printf("final bill = %.2f",bill1);
	} 
}