// Add using pointer
#include <stdio.h>
#include <stdlib.h>
void main(){
    int *p1 = (int *)malloc(sizeof(int));
    int *p2 = (int *)malloc(sizeof(int));
    printf("Enter two numbers: ");
    scanf("%d%d",p1,p2);
    printf("Sum = %d", *p1+*p2);
    free(p1); free(p2);          //Use to deallocate memory  
    }       