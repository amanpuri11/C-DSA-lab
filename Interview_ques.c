#include <stdio.h>
void main (){
  int i=17, j=9, k=4, l=32, m=12;
  while(k)
  {
    m= -i+j++ - k-- + ++l;
  }
  printf("%d %d %d %d %d",i+m, j, k, l, m);
}