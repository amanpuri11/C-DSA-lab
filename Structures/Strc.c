#include <stdio.h>
void main(){
    struct Student{
        char name[50];
        int rollno;
        int marks[4];
    };
    int i;
    struct Student s1;
    printf("Enter name of student:");
    scanf("%s", &s1.name);

    printf("Enter student roll no:");
    scanf("%d", &s1.rollno);

    printf("Enter marks of subjects:\n");
    for(i=0; i<3; i++){
        printf("Subject%d:", i+1);
        scanf(" %d",&s1.marks[i]);
    }
    int total = 0;
    for(i=0; i<3; i++){
        total += s1.marks[i];
    }
    printf("\n Student name: %s\n", s1.name);
    printf("Roll no: %d\n", s1.rollno);
    printf("Total marks: %d\n", total);
}