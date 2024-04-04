#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int stack[SIZE], top = -1;

int isEmpty(){
    return (top == -1) ? 1 : 0;
}
int isFull() {
    return (top == SIZE - 1);
}

void push() {
    if (isFull()) {
        printf("Stack Overflow!!!!\n");
    } else {
        top++;
        int val;
        printf("Enter element: ");
        scanf("%d", &val);
        stack[top] = val;
        printf("Element inserted!!!!\n");
    }
}
void pop() {
    if (isEmpty()) {
        printf("Stack underflow!!!!\n");
    } else {
        int val = stack[top];
        top--;
        printf("%d removed from stack...\n", val);
    }
}
int peek() {
    if (isEmpty()) {
        printf("stack is empty!!!!\n");
        return -1; // Indicate that stack is empty
    } else {
        return stack[top];
    }
}
void show() {
    if (isEmpty()) {
        printf("Stack is empty!!!!\n");
    } else {
        int i;
        for (i = top; i >= 0; i--)
            printf("Elements in stack are: %d\n", stack[i]);
    }
}
int main() {
    while (1) {
        printf("\n1. Push element\n");
        printf("2. Pop element\n");
        printf("3. Peek element\n");
        printf("4. Show stack\n");
        printf("5. Exit\n");
        
        int choice;
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
             push();
             break;
        case 2:
             pop();
            break;
        case 3:
            {
             int res = peek();
             if (res == -1)
                 printf("Stack is empty.......\n");
             else
                 printf("Top element is %d\n", res);
             }
             break;
        case 4:
            show();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid input.....\n");
            break;
        }
    }
    return 0;
}

//*****Delete element in a stack
#include <stdio.h>
int stack[100], temp[100], top1=-1, top2=-1;
void main(){
    int n, i, val;
    printf("Entet no. of elements in stack: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Enter element: ");
        scanf("%d",&stack[++top1]);
    }
    printf("Enter element you want to remove: ");
    scanf("%d",&val);
    for(i=top1; i>0; i--){
        if(stack[i]==val){
            top1--;
            break;
        }
        else{
            temp[++top2] = stack[i];
            top1--;
        }
    }
    if(i==-1)
    printf("Element not found!!!!");
    else
    printf("Element deleted!!!!\n");


    printf("Elements are:");
    for(i=0; i<n-1; i++){
        printf("%d",top1);
    }
}