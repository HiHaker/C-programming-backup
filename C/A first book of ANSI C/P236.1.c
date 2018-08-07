#include<stdio.h>
#include<math.h>
float normhts(float);
float normwts(float);
float pcdif(float,float);
void showit(float,float,float,float);
int main()
{
	int years,months;
	float height, weight, normht, normwt;
	float age, perdif, perdif2;
	
	/*这是输入段*/
	printf("\nHow old (in years) is this child? ");
	scanf("%d",&years);
	printf("How many months since the child's birthday?\n");
	scanf("%d",&months);
	age = years + months/12.0;/*转换为年龄总数*/
	printf("Enter the child's height (in inches): \n");
	scanf("%f",&height);
	printf("Enter the child's weight (in pounds): \n");
	scanf("%f",&weight);
	
	normht = normhts(age);
	normwt = normwts(age);
	
	perdif = pcdif(height, normht);
	perdif2 = pcdif(weight, normwt);
	
	showit(normht, perdif, normwt, perdif2);
	
	return 0;
}

float normhts(float age)/*返回正常身高*/
{
	#define MINAGE 6.0
	float agedif, avght;
	
	agedif = age - MINAGE;
	avght = -0.25*pow(agedif,2) + 3.5*agedif + 45.0;
	
	return (avght);
}

float normwts(float wt)/*返回正常体重*/
{
	return (0.5*(wt-6)+5*(wt-6)+48);
}

float pcdif(float actual, float base)/*差额百分比*/
{
	return ((actual-base)/base);
}

void showit(float normht, float perif, float normwt, float perif2)
{
	printf("The average height in inches is :%5.2f, The average weight in pounds is :%5.2f\n",normht,normwt);
	printf("The actual height deviates from the norm by :%6.2f%c,The actual height deviates from the norm by :%6.2f%c\n",perif,'%',perif2,'%');
}
