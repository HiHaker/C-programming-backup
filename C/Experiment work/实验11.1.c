#include<stdio.h>
#define MSIZE 50
struct grades//每一个学生的成绩的一个结构// 
{
	char schoolnumbers[MSIZE];
	char name[MSIZE];
	double subj1;
	double subj2;
	double subj3;
	double averagegrade;
};
int main()
{
	struct grades student1,student2,student3,student4,student5;
	printf("Please enter the first student's messages(schoolnumbers,name,subject1's grades,subject2's grades,subject3's grades):\n");
	gets(student1.schoolnumbers);
	gets(student1.name);
	fflush(stdin);
	scanf("%lf",&student1.subj1);
	scanf("%lf",&student1.subj2);
	scanf("%lf",&student1.subj3);
	student1.averagegrade=(student1.subj1+student1.subj2+student1.subj3)/3;
	printf("Please enter the second student's messages(schoolnumbers,name,subject1's grades,subject2's grades,subject3's grades):\n");
	gets(student2.schoolnumbers);
	gets(student2.name);
	fflush(stdin);
	scanf("%lf",&student2.subj1);
	scanf("%lf",&student2.subj2);
	scanf("%lf",&student2.subj3);
	student2.averagegrade=(student2.subj1+student2.subj2+student3.subj3)/3;
	printf("Please enter the third student's messages(schoolnumbers,name,subject1's grades,subject2's grades,subject3's grades):\n");
	gets(student3.schoolnumbers);
	gets(student3.name);
	fflush(stdin);
	scanf("%lf",&student3.subj1);
	scanf("%lf",&student3.subj2);
	scanf("%lf",&student3.subj3);
	student3.averagegrade=(student3.subj1+student3.subj2+student3.subj3)/3;
	printf("Please enter the first student's messages(schoolnumbers,name,subject1's grades,subject2's grades,subject3's grades):\n");
	gets(student4.schoolnumbers);
	gets(student4.name);
	fflush(stdin);
	scanf("%lf",&student4.subj1);
	scanf("%lf",&student4.subj2);
	scanf("%lf",&student4.subj3);
	student4.averagegrade=(student4.subj1+student4.subj2+student4.subj3)/3;
	printf("Please enter the first student's messages(schoolnumbers,name,subject1's grades,subject2's grades,subject3's grades):\n");
	gets(student5.schoolnumbers);
	gets(student5.name);
	fflush(stdin);
	scanf("%lf",&student5.subj1);
	scanf("%lf",&student5.subj2);
	scanf("%lf",&student5.subj3);
	student5.averagegrade=(student5.subj1+student5.subj2+student5.subj3)/3;
	//输出平均成绩// 
	printf("The student's average grades is %lf %lf %lf %lf %lf",student1.averagegrade,student2.averagegrade,student3.averagegrade,
	student4.averagegrade,student5.averagegrade);
	return 0;
}
