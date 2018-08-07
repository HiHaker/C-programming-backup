#include<stdio.h>
int main()
{
    int i,j;

    int fibo1[12]={1,1,2,3,4,5,6,7,8,9,10,11};
    int fibo2[12]={0,0,1,1,2,3,4,5,6,7,8,9};
    int fibo3[12]={0,0,0,0,1,1,2,3,4,5,6,7};
    int fibo4[12]={0,0,0,0,0,0,1,1,2,3,4,5};
    int fibo5[13]={0,0,0,0,0,0,0,0,1,1,2,3};
    
    for(i=0,j=1;i<12;i++,j++)
    {
        printf("The %d month's numbers of the rabbits is %d\n",j,fibo1[i]+fibo2[i]+fibo3[i]+fibo4[i]+fibo5[i]);
    }
    return 0;
}
