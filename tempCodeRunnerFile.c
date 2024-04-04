#include<stdio.h>
void main(){
    int n;
    printf("Enter size of list: ");
    scanf("%d",&n);
    int list[n];

    printf("Enter elements in list: ");
    for(int i=0; i<n; i++){
        scanf("%d",&list[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum += list[i];
    }
    printf("Sum is %d",sum);
}
