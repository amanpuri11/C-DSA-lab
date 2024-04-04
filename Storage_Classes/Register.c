#include <stdio.h>
void main() {
    register int a=10;
    auto int b=8;
    printf("The value of register= %d",a);
    
    int *p1, *p2;    
    p1=&a;          //Register variable does not have any memory address, its address is stored in cpu
    p2=&b;          // So we get error
    printf("Address of a=%p",p1);
    printf("Address of b=%p",p2);
}  