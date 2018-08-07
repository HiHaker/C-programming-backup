/*
百马百担问题
胡健龙
2017.10.6
*/
#include<stdio.h>
int main()
{
	int big, medium, small;
	big = 0;
	medium = 0;
	small = 0;

	while (big<=100)
	{
		big++;
		medium =(2 * (100 - 3 * big) - (100 - big))/3;//根据方程式所得，设大、中、小马分别为x，y，z，则有x+y+z=100;3x+2y+1/2z=100//

		small = 100 - big - medium;

		while (((3 * big + 2 * medium + 0.5*small) == 100 && (big + medium + small == 100) && (small % 2 == 0)))
		{
			if (big > 0 && medium > 0 && small > 0)
			{
				printf("big=%d,medium=%d,small=%d\n", big, medium, small);
			}
			break;
		}

	}	
	printf("胡健龙20171120147\n");

	return 0;
}