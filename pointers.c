#include<stdio.h>
int main()
{
	
	int a[5];
	int *ptr;
	int i;
	int j;
	int arr;
	int temp;
	ptr=a;
	printf("enter the elements of base address of array");
	for(i=0;i<5;i++)
	scanf("%d",ptr+i);
	printf("display elements");
	for(i=0;i<5;i++)
	printf("a[%d]=%d\n",i,*(ptr+i));
	    //Sort the array in descending order    
    for (int i = 0; i < 5; i++) {     
        for (int j = i+1; j < 5; j++) {     
           if(a[i] < a[j]) {    
               temp = a[i];    
               a[i] = a[j];    
               a[j] = temp;    
           }     
        }     
    }    
    printf("\n");    
    //Displaying elements of array after sorting    
    printf("Elements of array sorted in descending order: \n");    
    for (int i = 0; i < 5; i++) {     
        printf("%d ", a[i]);    
    }    

}
