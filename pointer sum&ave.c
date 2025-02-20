#include<stdio.h>
void oper(int,int,int,int,int,int*s,int*p);
int main()
{
	int sum,average;
	int a,b,c,d,e;
	printf("enter 5  sub marks");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	oper(a,b,c,d,e,&sum,&average);
	printf("sum=%d,\ndifference=%d",sum,average);
}
void oper(int u,int v,int w,int x,int y,int*s,int*p)
{
*s=u+v+w+x+y;
*p=u+v+w+x+y/5;
}
	
	
	
	
	
	

