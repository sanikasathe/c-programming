#include <stdio.h>
int main() {
    int data[5]; // array declaration 
 int  *p; // pointer declaration 
     p =data; //storing the initial address of array in pointer as pointer stores address of variable. 

    printf("Enter elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", p + i);

    printf("You entered: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(data + i)); 
    return 0;
}
