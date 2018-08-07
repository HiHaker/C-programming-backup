#include<stdio.h>
#define PAI 3.1415
void countareas(float ,float );
int main()
{
	countareas(2.35,5.6);
	
	return 0;
}

void countareas(float radius,float height)
{
	float volume;
	
	volume = radius*radius*PAI*height;
	
	printf("The volume of this cylinder is %f\n",volume);
}
