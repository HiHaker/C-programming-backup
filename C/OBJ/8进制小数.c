//�˽���С�� 
#include<stdio.h>
#include<math.h>//������ѧ�⺯�� 
#define MSIZE 20//���ų���
int getdcnum(int []);//����С������ 
int main(void)
{
	int i,k=-1,length;
	int num1[MSIZE];
	double nums2=0;
	
	printf("Please enter a octal number:\n");
	length=getdcnum(num1);//�������鴫�ݵ��������������� 
	for(i=0;i<length;i++,k--)//���� 
		nums2+=num1[i]*pow(8,k);
	printf("0.");//��� 
	for(i=0;i<length;i++)
		printf("%d",num1[i]);
	printf(" [8] = %lf [10]",nums2);
	return 0;
}
int getdcnum(int nums[])//����С������ 
{
	int i=0;
	char mid='a';
	while(mid!='\n')
	{
		mid=getchar();
		if(i>=2&&mid!='\n')
			nums[i-2]=mid-'0';
		i++;
	}
	return i-3;
}
