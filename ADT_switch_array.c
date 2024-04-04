#include <stdio.h>
#include<stdlib.h>
#define maxsize 1000
int size, list[maxsize];     // it is globally declared, no need to call again and again
void Create()
{
      printf("Enter size of list: ");
      scanf("%d",&size);
      if(size>maxsize)
      printf("List Over flow!!!");
      else{
        printf("Enter list elements: \n");
        for(int i=0; i<size; i++)
        scanf("%d",&list[i]);
    }
}
void Display(){
    if(size==0)
    printf("List is empty");
    else{
       printf("List elements are: \n");
       for(int i=0; i<size; i++)
       printf("%d\t",list[i]);
    }
 }
 void Insert(){
    if (size==0)
    printf("List is empty!!!\n");
    else{
    int pos, value;
    printf("Enter position you want to insert: ");
    scanf("%d",&pos);
    printf("Enter value to insert: ");
    scanf("%d",&value);
    if(pos>0 && pos<size){
       for(int i=size; i>=pos; i--)
       list[i] = list[i-1];
       list[pos]=value;
       size++; 
       printf("Element Added!!!");
    }
    else printf("Invalid position!!!\n\n");
  }
 }
 void delete(){
    if(size==0)
    printf("List is empty");
    else{
        int pos;
    printf("Enter position of deletion: ");
    scanf("%d",&pos);
    if(pos>0 && pos<=size){
        for(int i=pos-1; i<size; i++)
            list[i] = list[i+1];
        size--;
        printf("Element deleted!!!\n");
    }
      else printf("Invalid position!!!");
    }
 }
 void search(){
    if (size==0)
    printf("List is empty!!!\n");
    else{
        int val,i;
        printf("Enter value to search: ");
        scanf("%d",&val);
        for(i=0; i<size; i++){
            if(list[i]==val){
                break;
            }
        }
        if(i==size)
            printf("Element not found !!!\n");
            else printf("Element found !!!\n");
    }
}
void main(){
    while(1)
    {
     printf("1. Create list: ");
     printf("2. Insert elements: ");
     printf("3. Display elements: ");
     printf("4. Delete element: ");
     printf("5. Search element: ");
     printf("6. Exit\n");

    int choice;
    printf("Enter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        Create();
            break;
        case 2:
        Insert();
            break;
        case 3:
        Display();
            break;
        case 4:
        delete();
            break;
        case 5:
        search();
            break;
        case 6:
        exit(0);
            break;
        default:
        {
            printf("Invalid input.....");
        }
        printf("\n\n");
        system("pause");
    }
  }
}