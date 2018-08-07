#include<stdio.h>
int main()
{
    void days(int ,int ,int );
    void date(int , int);
    char chose;
    int year,month,day;
    
    printf("This app helps you to convert the date into days or let you specify the year and days to find the date\n");
    printf("To  convert the date into days,type 'A' please\n");
    printf("To  specify the year and days to find the date,type 'B' \n");
    
    scanf_s("%c",&chose);
    
    if (chose=='A')
    {
        printf("Please enter the years\n");
        scanf_s("%d",&year);
        printf("Please enter the month\n");
        scanf_s("%d",&month);
        printf("Please enter the days\n");
        scanf_s("%d",&day);
        
        days(year,month,day);
    }
    else if(chose=='B')
    {
       printf("Please enter the year\n");
       scanf_s("%d",&year);
       printf("Please enter the days\n");
       scanf_s("%d",&day);
       
       date(year,day);
    }
    else printf("WRNING!\n");
    return 0;
}

void days(int year1, int month1, int day1)
{
    int i,k,sum1,sum2,sum3;
    if (year1%400==0)
    {
        for (i=1,k=0;i<=year1;i++)
        {
            if (i%400==0)
                k++;
            else;
        }
        sum1=k*366+(year1-k)*365;
        switch (month1)
        {
            case 1:
                sum2=31;
                break;
            case 2:
                sum2=60;
                break;
            case 3:
                sum2=91;
                break;
            case 4:
                sum2=121;
                break;
            case 5:
                sum2=152;
                break;
            case 6:
                sum2=182;
                break;
            case 7:
                sum2=213;
                break;
            case 8:
                sum2=244;
                break;
            case 9:
                sum2=274;
                break;
            case 10:
                sum2=305;
                break;
            case 11:
                sum2=335;
                break;
            case 12:
                sum2=366;
                break;
        }
        sum3=sum1+sum2-day1;
        printf("The days numbers is %d\n",sum3);
    }
    else
    {
         for (i=1,k=0;i<=year1;i++)
        {
            if (i%400==0)
                k++;
            else;
        }
        sum1=k*366+(year1-k)*365;
        switch (month1)
        {
            case 1:
                sum2=31;
                break;
            case 2:
                sum2=59;
                break;
            case 3:
                sum2=90;
                break;
            case 4:
                sum2=120;
                break;
            case 5:
                sum2=151;
                break;
            case 6:
                sum2=181;
                break;
            case 7:
                sum2=212;
                break;
            case 8:
                sum2=243;
                break;
            case 9:
                sum2=273;
                break;
            case 10:
                sum2=304;
                break;
            case 11:
                sum2=334;
                break;
            case 12:
                sum2=365;
                break;
        }
        sum3=sum1+sum2-day1;
        printf("The days numbers is %d\n",sum3);
    }
}

void date(int year2,int day2)
{
   if (year2%400==0)
   {
        if(day2<=31)
        printf("is %d Janury %d \n",year2,day2);
        else if(day2<=60)
        printf("is %d Febrary %d \n",year2,day2-31);
        else if(day2<=91)
        printf("is %d March %d \n",year2,day2-60);
        else if(day2<=121)
        printf("is %d April %d \n",year2,day2-91);
        else if(day2<=152)
        printf("is %d May %d \n",year2,day2-121);
        else if(day2<=182)
        printf("is %d June %d \n",year2,day2-152);
        else if(day2<=213)
        printf("is %d July %d \n",year2,day2-182);
        else if(day2<=244)
        printf("is %d August %d \n",year2,day2-213);
        else if(day2<=274)
        printf("is %d September %d \n",year2,day2-244);
        else if(day2<=305)
        printf("is %d October %d \n",year2,day2-274);
        else if(day2<=335)
        printf("is %d November %d \n",year2,day2-305);
        else
        printf("is %d December %d \n",year2,day2-335);
   }
   else
   {
        if(day2<=31)
        printf("is %d Janury %d \n",year2,day2);
        else if(day2<=59)
        printf("is %d Febrary %d \n",year2,day2-31);
        else if(day2<=90)
        printf("is %d March %d \n",year2,day2-59);
        else if(day2<=120)
        printf("is %d April %d \n",year2,day2-90);
        else if(day2<=151)
        printf("is %d May %d \n",year2,day2-120);
        else if(day2<=181)
        printf("is %d June %d \n",year2,day2-151);
        else if(day2<=212)
        printf("is %d July %d \n",year2,day2-181);
        else if(day2<=243)
        printf("is %d August %d \n",year2,day2-212);
        else if(day2<=273)
        printf("is %d September %d \n",year2,day2-243);
        else if(day2<=304)
        printf("is %d October %d \n",year2,day2-273);
        else if(day2<=334)
        printf("is %d November %d \n",year2,day2-304);
        else
        printf("is %d December %d \n",year2,day2-334);
   }
}
















