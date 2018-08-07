#include<stdio.h>
int main()
{
    int i;
    int yang1[1]={1};
    int yang2[2]={1,1};
    int yang3[3]={1,2,1};
    int yang4[4]={1,3,3,1};
    int yang5[5]={1,4,6,4,1};
    int yang6[6]={1,5,10,10,5,1};
    int yang7[7]={1,6,15,20,15,6,1};
    int yang8[8]={1,7,21,35,35,21,7,1};
    int yang9[9]={1,8,28,56,70,56,28,8,1};
    int yang10[10]={1,9,36,84,126,126,84,36,9,1};
    
    printf("%3d \n",yang1[0]);
    for(i=0;i<2;i++)
        printf("%3d ",yang2[i]);
    printf("\n");
    for(i=0;i<3;i++)
        printf("%3d ",yang3[i]);
    printf("\n");
    for(i=0;i<4;i++)
        printf("%3d ",yang4[i]);
    printf("\n");
    for(i=0;i<5;i++)
        printf("%3d ",yang5[i]);
    printf("\n");
    for(i=0;i<6;i++)
        printf("%3d ",yang6[i]);
    printf("\n");
    for(i=0;i<7;i++)
        printf("%3d ",yang7[i]);
    printf("\n");
    for(i=0;i<8;i++)
        printf("%3d ",yang8[i]);
    printf("\n");
    for(i=0;i<9;i++)
        printf("%3d ",yang9[i]);
    printf("\n");
    for(i=0;i<10;i++)
        printf("%3d ",yang10[i]);
    printf("\n");
    return 0;
}
