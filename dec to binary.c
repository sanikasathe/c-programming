#include<stdio.h>
int decimaltobinary(int);
int main()
{int binary,decimal;
	printf("enter decimal number");
	scanf("%d",&decimal);
	binary=decimaltobinary(decimal);
	printf("decimal(%d)=binary(%d)",decimal,binary);
}
int decimaltobinary(int n)
{
int binary=0,rem,num,base=1;
num=n;
while(num!=0)
{
	rem=num%2;
	binary=binary+base*rem;
	base=base*10;
	num=num/2;
}

return binary;
	
}
