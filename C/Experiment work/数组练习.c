#include<stdio.h>
int findMax(int[], int);
int main()
{
    #define MAXELS 5
    int nums[MAXELS]={2,18,1,27,16};
    
    printf("The maximum value is %d\n",findMax(nums,MAXELS));
    
    return 0;
}

int findMax(int vals[],int numles)
{
    int i,max=vals[0];
    
    for(i=1;i<numles;i++)
        if(max<vals[i])
            max=vals[i];
    return max;
}
