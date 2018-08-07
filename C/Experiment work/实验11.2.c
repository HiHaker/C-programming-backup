#include<stdio.h>
#define MSIZE 50
struct grades
{
	char schoolnumber[MSIZE];
	char name[MSIZE];
	double subj1;
	double subj2;
	double subj3;
	double averagegrade;
}students[MSIZE];
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		fflush(stdin);
		printf("Please enter the %d student's schoolnumbers:\n",i+1);
		gets(students[i].schoolnumber);
		printf("Please enter the %d student's name:\n",i+1);
		gets(students[i].name);
		printf("Please enter the three subjects's grades:\n");
		scanf("%lf",&students[i].subj1);
		scanf("%lf",&students[i].subj2);
		scanf("%lf",&students[i].subj3);
		students[i].averagegrade=(students[i].subj1+students[i].subj2+students[i].subj3)/3.0;
	}
	for(i=0;i<5;i++)
		printf("The %d student's averagegrades is %f",i,students[i].averagegrade);
	
	return 0;
}
