#include<stdio.h>
int main()
{
	int m[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int r,c,target,count=0;
	printf("enter target");
	scanf("%d",&target);
	 for (r = 0; r < 4; r++)
	  {
        for (c = 0; c < 4; c++) 
		{
            count++;
            if (count == target) 
			{
                printf("The %dth smallest element is: %d\n", target,m[r][c]);
                return 0;
            }
        }
    }
	return 0;
}

