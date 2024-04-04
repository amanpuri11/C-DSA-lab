#include <stdio.h>
#include <math.h>
void main (){
    int num, res=0, rem, pos=0;
    printf("Enter an octal number: ");
    scanf("%d",&num);

    while(num!=0){
    rem = num%10;
    res += rem*pow(8,pos);
    num = num/10;
  pos++;
}
printf("Decimal number is %d",res);
}

// *****😶 Without power 😶*****
#include <stdio.h>
void main (){
    int num, res=0, pow=1;
    printf("Enter an octal number: ");
    scanf("%d",&num);

    while(num!=0){
    
    res += num%10*pow;
    num = num/10;
    pow = pow*8;
}
printf("Decimal number is %d",res);
}

//***** Deciaml to octal *****
#include <stdio.h>
void main(){
    int num, res=0, rem, pow=1, quo;
    printf("Enter decimal no: ");
    scanf("%d",&num);

    while(num!=0){
        rem = num%8;
        num = num/8;
        res = res + rem * pow;
        pow = pow * 10;
    }
    printf("Octal no. is %d",res);
}
