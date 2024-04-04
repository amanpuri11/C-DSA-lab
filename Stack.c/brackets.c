//To check whether in the given expression, brackets are balanced or not 
#include <stdio.h>
#include <string.h>
void main(){
    char exp[100], stack[100];
    int top=-1, i, len;
    printf("Enter expression: ");
    gets(exp);
    len=strlen(exp);
    
    for(i=0; i<len; i++){
        if(exp[i]=='[' || exp[i]=='{' || exp[i]=='('){
            top++;
            stack[top]=exp[i];
        }
        else if(exp[i]==']' || exp[i]=='}' || exp[i]==')'){
            if(top == -1) {
                printf("Not balanced!!!");
                return;
            }
        char ch = stack[top];
        if((ch=='[' && exp[i]==']') || (ch=='{' && exp[i]=='}') || (ch=='(' && exp[i]==')')){
            top--;
        }
        else {
            printf("Not balanced!!!");
            return;
            }
        }
    }    
    if(top==-1)
        printf("Balanced !!!");
    else
        printf("Not balanced!!!");
}