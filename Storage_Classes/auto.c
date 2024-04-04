// #include <stdio.h.>
// void main(){
//     int a=20;
//     {
//         auto int a=10;
//         printf("Block=%d\n",a);
//     }
//     printf("Function:%d",a);
// }

//***🤮For garbage in block*****//
#include <stdio.h>
int a=5;
void main ()
{
    {
        auto int a;
        printf("Block=%d\n",a);
    }
    printf("Function=%d",a);
}