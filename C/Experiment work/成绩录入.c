#include<stdio.h>
#include<stdlib.h>//exit ����������//
#define SIZE 20//��������//
void gradesregister(FILE *);//�ɼ�¼�뺯��//
int main()
{
	FILE *infile;//�����ڲ��ļ���//
	char c;
	
	infile=fopen("stud.txt","r");//�Զ�ģʽ���ļ�//
	//����ļ��Ƿ��Ѿ�����//
	if(infile!=NULL)
	{
		printf("The file is exit,would you want to rewiritten it?(y/n)\n");
		scanf("%c",&c);
		if(c=='n')
		{
			printf("The file has not be rewritten\n");
			exit(1);
		}
	}
	//���ú���¼��ɼ�// 
	gradesregister(infile);
	
	//�ر��ļ�//
	fclose(infile);
	
	return 0;
}
//�ɼ�¼�뺯��ԭ��//
void gradesregister(FILE *inFile)
{
	int j;
	//��������ַ����������ڴ洢ѧ������// 
	char names1[20],names2[20],names3[20],names4[20],names5[20];
	//���峤��������洢ѧ��// 
	long long sclnumber[SIZE];
	//����˫�����͵��������ڴ洢��Ŀһ����Ŀ������Ŀ���ĳɼ���ƽ���ɼ�// 
	float subj1[SIZE],subj2[SIZE],subj3[SIZE],average[SIZE];
	//��дģʽ���ļ�//
	inFile=fopen("stud.txt","w");
	//���һ�β��ɹ��Ĵ��ļ�//
	if(inFile==NULL)
	{
		printf("Failed to open stud.txt,Please check the file name\n");
		exit(1);
	}
	
	for(j=0;j<=4;j++)
	{
		printf("Please enter the schoolnumber of the %d student:\n",j+1);
		scanf("%lld",&sclnumber[j]);//ѧ��λ��Ϊ11λ��ʱ����Ҫʹ��˫������long long//
		fflush(stdin);
		printf("Please enter the name of the %d student:\n",j+1);
		switch(j)
		{
			case 0:
			gets(names1);
			break;
			case 1:
			gets(names2);
			break;
			case 2:
			gets(names3);
			break;
			case 3:
			gets(names4);
			break;
			case 4:
			gets(names5);
			break;
		}
		printf("Please enter the subject1's grades of the %d student:\n",j+1);
		scanf("%f",&subj1[j]);
		printf("Please enter the subject2's grades of the %d student:\n",j+1);
		scanf("%f",&subj2[j]);
		printf("Please enter the subject3's grades of the %d student:\n",j+1);
		scanf("%f",&subj3[j]);
		
		average[j]=(1.0/3.0)*(subj1[j]+subj2[j]+subj3[j]);
	}
	//д�����ݵ��ļ�// 
	fprintf(inFile,"%-11lld   %-8s   %5.2f   %5.2f   %5.2f   %5.2f\n",sclnumber[0],names1,subj1[0],subj2[0],subj3[0],average[0]);
	fprintf(inFile,"%-11lld   %-8s   %5.2f   %5.2f   %5.2f   %5.2f\n",sclnumber[1],names2,subj1[1],subj2[1],subj3[1],average[1]);
	fprintf(inFile,"%-11lld   %-8s   %5.2f   %5.2f   %5.2f   %5.2f\n",sclnumber[2],names3,subj1[2],subj2[2],subj3[2],average[2]);
	fprintf(inFile,"%-11lld   %-8s   %5.2f   %5.2f   %5.2f   %5.2f\n",sclnumber[3],names4,subj1[3],subj2[3],subj3[3],average[3]);
	fprintf(inFile,"%-11lld   %-8s   %5.2f   %5.2f   %5.2f   %5.2f\n",sclnumber[4],names5,subj1[4],subj2[4],subj3[4],average[4]);
}
