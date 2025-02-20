#include<stdio.h>
struct book{
char title[10];
char author_name[10];
float price;
}
b[3];
int main()
{int i;
for(i=0;i<3;i++)
{
	printf("book info %d:",i);
		printf("\n enter book title");
		scanf("%s",b[i].title);
	printf("\n enter author name");
	scanf("%s",b[i].author_name);
	printf("\n enter the price");
	scanf("%f",b[i].price);
}
for(i=0;i<3;i++)
{
	printf("\n book title is %s",b[i].title);
	printf("\n author name is %s",b[i].author_name);
	printf("\n price of book is %f",b[i].price);
	}
}

	
	
	
	

