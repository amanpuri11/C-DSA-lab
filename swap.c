// Using third variable
#include <stdio.h>
void main (){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    
   c=a;                        /*  Without third variable        a = a+b;         */
   a=b;                        /*                                b = a-b;         */
   b=c;                        /*                                a = a-b;         */

    printf("After swapping\n");
     printf("%d\n",a);
     printf("%d",b);
}

//*** Using bitwise***
#include <stdio.h>
void main() {
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    x = x^y;
    y = x^y;
    x = x^y;
    printf("After swapping");
    printf("x = %d and y = %d",x,y);
}

//*** Using pointer                                          
#include <stdio.h>
void main(){
    int x, y;
    int *ptr1=&x, *ptr2=&y;
    printf("Enter value of x and y: \n");
    scanf("%d %d",&x, &y);

    printf("Before swapping: %d %d\n",x,y);
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("After swapping: %d %d",*ptr1,*ptr2);
}