#include <stdio.h>
void fun(int arr[]){
    int i;
    for(i=0; i<5; i++)
    {
        arr[i]=arr[i]+10;
    }
}
void main(){
    int arr[5], i;
    for(i=0; i<5; i++){
        printf("Enter array element: arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("Passing the entire array........\n");
    fun(arr);
    for(i=0; i<5; i++){
        printf("After calling function a[%d]:%d\n", i, arr[i]);
    }
}