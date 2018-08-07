#include<stdio.h>
#define MSIZE 50
struct grade
{
	char schoolnumbers[MSIZE];
	char name[MSIZE];
	double subj1;
	double subj2;
	double subj3;
	double averagegrade;
	struct grade *nextaddr;
}student[MSIZE];
int main()
{
	struct grade *pt=&student[0];
	int i=0;
	
	do{
		fflush(stdin);
		printf("Please enter the %d student's schoolnumbers:\n",i+1);
		gets(pt->schoolnumbers);
		printf("Please enter the %d student's name:\n",i+1);
		gets(pt->name);
		printf("Please enter the three subjects's grades:\n");
		scanf("%lf",&pt->subj1);
		scanf("%lf",&pt->subj2);
		scanf("%lf",&pt->subj3);
		pt->averagegrade=(pt->subj1+pt->subj2+pt->subj3)/3.0;
		if(i==4)
			student[i].nextaddr=NULL;
		else
			student[i].nextaddr=&student[i+1];
		
	}while((pt=student[i++].nextaddr)!=NULL);
	
	return 0;
}

