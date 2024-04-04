#include <stdio.h>
void sum(){
    static int a=10, b=24;
    printf("%d %d\n", a,b);
    a++;
    b++;
}                   //If any change happens in static variable, then changed value stored in variable.
void main(){
    int i;
    for(i=0; i<3; i++){
        sum();       
    }
}