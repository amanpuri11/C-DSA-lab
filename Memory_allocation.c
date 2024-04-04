#include <stdio.h>
#include <stdlib.h>
void main(){
    int n, i;
    printf("Enter the limit:");
    scanf("%d",&n);
    int *ch=(int *)malloc(sizeof(int));

    for(i=0; i<6;i++)
    {
        scanf("%d",&ch);
    }
    for(i=0; i<5; i++)
    printf("%d\n",ch[i]);
    free(ch);               //memory detected
    
   for(i=0; i<5; i++)
   printf("%d\n",ch[i]);

}