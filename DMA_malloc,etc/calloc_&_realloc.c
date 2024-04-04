// calloc && realloc
#include <stdio.h>
#include <stdlib.h>
void main(){
    int n, i;
    printf("Enter array size: ");
    scanf("%d", &n);

    int *arr = (int *)calloc(n,sizeof(int));
    printf("Enter array element: ");
    for(i=0; i<n; i++)
        scanf("%d", arr+i);
        realloc(arr,8);
        printf("Enter next value: ");
        scanf("%d",arr+n);
        printf("Enter next value: ");
        scanf("%d",arr+(n+1));
        printf("Array elements are: \t");
    
    for(i=0; i < n+2; i++)
    printf("%d\t",*(arr+i));
free(arr);
}