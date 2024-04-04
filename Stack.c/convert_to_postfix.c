#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char operator[100], s[100];
int top=-1;
int precedence(char op){
    switch(op){
        case '+':
        case '-':
        return 1;
        case '*':
        case '/':
        return 2;
        default:
        return 0;
    }
}
char* convertInfixToPostfix(char *str){
    int i=0, x=0;
    while(str[i]!='\0'){
        if (str[i]>=48 && str[i]<=57 || str[i]>=65 && str[i]<=60 || str[i]>=97 && str[i]<=122){
            s[x++]=str[i];
            }
        else if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/'){
            if(top==-1)
            operator[++top]=str[i];
            else{
                if(precedence(str[i]) <= precedence(operator[top])){
                    s[x++]=operator[top--];
                }
                operator[++top]=str[i];
            }
        }
        else if(str[i]=='('){
            operator[++top]=str[i];
        }
        else if(str[i]==')'){
            while(str[i]!='('){
                s[x++]=operator[top--];
            }
            top--;
        }
    i++;
    }
    while(top!=-1){
        s[x++]=operator[top--];
    }
    s[x]='\0';
    return s;
}
char* convertInfixToPrefix(char *str){
    int i=0, x=0;
    while(str[i]!='\0'){
        if (str[i]>=48 && str[i]<=57 || str[i]>=65 && str[i]<=60 || str[i]>=97 && str[i]<=122){
            s[x++]=str[i];
            }
        else if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/'){
            if(top==-1)
            operator[++top]=str[i];
            else{
                if(precedence(str[i]) <= precedence(operator[top])){
                    s[x++]=operator[top--];
                }
                operator[++top]=str[i];
            }
        }
        else if(str[i]=='('){
            operator[++top]=str[i];
        }
        else if(str[i]==')'){
            while(str[i]!='('){
                s[x++]=operator[top--];
            }
            top--;
        }
    i++;
    }
    while(top!=-1){
        s[x++]=operator[top--];
    }
    s[x]='\0';
    return strrev(s);
}
int main(){
    char str[100];
    printf("Enter expression: ");
    gets(str);
    printf("Postfix expression of infix expression %s is %s\n",str,convertInfixToPostfix(str));
    printf("Prefix expression of infix expression %s is %s\n",str,convertInfixToPrefix(str));
    return 0;
}