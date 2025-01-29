#include<stdio.h>
#include<math.h>
float stdDeviation(int numbers[],int Num);
int main()
{
	int Num,i;
	float SD;
	printf("enter size of numbers:");
	scanf("%d",&Num);
	int numbers[Num];
	printf("enter the numbers:");
	for(i=0;i<Num;i++)
	{
		scanf("%d",&numbers[i]);
	}
	SD=stdDeviation(numbers,Num);
	printf("the standard Deviation is:%f",SD);
	
}
float stdDeviation(int numbers[],int Num)
{
	int sum=0,i;
	float avg,SD=0.0;
	for(i=0;i<Num;i++)
	{
		sum+=numbers[i];
	}
	avg = sum/Num;
	for(i=0;i<Num;i++)
	{
		SD += pow(numbers[i]-avg,2);
	}
	return sqrt(SD/Num);
}
