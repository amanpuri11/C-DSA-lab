#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int stack[10], top1 = -1, top2=SIZE;

void push1(int val){
    if(top1==top2-1)
    printf("Stack overflow!!!!");
    else{
        stack[++top1]=val;
    }
}
void push2(int val){
    if(top1==top2-1)
    printf("Stack overflow!!!!");
    else{
        stack[--top2]=val;
    }
}
void show1(){
    if(top1==-1)
    printf("Stack 1 is empty!!!!");
    else{
        for(int i=top1; i>=0; i--)
        printf("%d\n",stack[i]);
    }
}
void show2(){
    if(top1==-1)
    printf("Stack 2 is empty!!!!");
    else{
        for(int i=top2; i<0; i++)
        printf("%d\n",stack[i]);
    }
}

int main() {
    while (1) {
        printf("\n1. Push element in stack1\n");
        printf("2. Push element in stack2\n");
        printf("3. Pop element in stack1\n");
        printf("4. pop element in stack2\n");
        printf("5. peek in stack1\n");
        printf("5. peek in stack2\n");
        printf("7. Show elements of stack1\n");
        printf("8. Show elements of stack2\n");
        printf("9. Exit\n");

     int choice, val;
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
    case 1:
        printf("Enter value: ");
        scanf("%d",&val);
            push1(val);
            break;
    case 2:
        printf("Enter value: ");
        scanf("%d",&val);
             push2(val);
            break;
    // case 3:
    //         pop1();
    //          break;
    // case 4:
    //          pop2();
    // case 5:
    //         {
    //          int res1 = peek();
    //          if (res1 == -1)
    //              printf("Stack1 is empty.......\n");
    //          else
    //              printf("Top element is %d\n", res1);
    //         }
    //         break;
    // case 6:
    //         {
    //         int res2 = peek();
    //         if (res2 == -1)
    //             printf("Stack2 is empty.......\n");
    //          else
    //             printf("Top element is %d\n", res2);
    //         }
    //         break;
    case 7:
           show1();    
        break;
    case 8:
        show2();
        break;
    case 9:
        exit(0);
        break;

        default:
            printf("Invalid input.....\n");
            break;
        }
    }
    return 0;
}