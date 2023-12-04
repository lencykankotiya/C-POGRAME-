#include<stdio.h>
struct stud
{
	int rn;
	char name[50];
	float pr;
}s1,s2;
void main()
{
	struct stud s3,s4,s5;
	printf("Student 1 \n");
	printf("Roll no = ");
	scanf("%d",&s1.rn);
	printf("Name = ");
	scanf("%s",&s1.name);
	printf("Percentage = ");
	scanf("%f",&s1.pr);
	
	printf("Student 2 \n");
	printf("Roll no = ");
	scanf("%d",&s2.rn);
	printf("Name = ");
	scanf("%s",&s2.name);
	printf("Percentage = ");
	scanf("%f",&s2.pr);
	
	printf("Student 3 \n");
	printf("Roll no = ");
	scanf("%d",&s3.rn);
	printf("Name = ");
	scanf("%s",&s3.name);
	printf("Percentage = ");
	scanf("%f",&s3.pr);
	
	printf("Student 4 \n");
	printf("Roll no = ");
	scanf("%d",&s4.rn);
	printf("Name = ");
	scanf("%s",&s4.name);
	printf("Percentage = ");
	scanf("%f",&s4.pr);
	
	printf("Student 5 \n");
	printf("Roll no = ");
	scanf("%d",&s5.rn);
	printf("Name = ");
	scanf("%s",&s5.name);
	printf("Percentage = ");
	scanf("%f",&s5.pr);
	
	printf("%d \t %s \t %f \n ",s1.rn,s1.name,s1.pr);
	printf("%d \t %s \t %f \n ",s2.rn,s2.name,s2.pr);
	printf("%d \t %s \t %f \n ",s3.rn,s3.name,s3.pr);
	printf("%d \t %s \t %f \n ",s4.rn,s4.name,s4.pr);
	printf("%d \t %s \t %f \n ",s5.rn,s5.name,s5.pr);
}