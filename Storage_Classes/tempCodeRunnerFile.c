// #include <stdio.h>
// void main(){
//     extern int a;
//     printf("%d",a);
// }
// int a=10;   // output: 10

#include <stdio.h>
#include "sample1.c"
void main() {
    extern int a;
    printf("%d",a);
}
  // output: 10