#include<stdio.h>
void oper(int,int,int*s,int*d,int*r);
int main()
{
	int sum,diff,div;
	int a,b;
	printf("enter the 2 numbers");
	scanf("%d%d",&a,&b);
	oper(a,b,&sum,&diff,&div);
	printf("sum=%d\ndiff=%d\ndiv=%d",sum,diff ,div);
}
void oper(int u,int v,int*s,int*d,int*r)
{*s=u+v;
*d=u-v;
 *r=u/v;
}
	
	
	
	


