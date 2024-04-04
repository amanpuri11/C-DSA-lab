#include <stdio.h>
void main(){
    union student{
        int rollno;
        char name[50];
        float avg;
    };
    int n, i;
    union student s;
    printf("Enter student rollno:\n");
    scanf("%d",&s.rollno);
    printf("Student rollno:%d\n",s.rollno);

    printf("Enter the student name:\n");
    scanf("%s",&s.name);
    printf("Student name:%s\n", s.name);
    
    printf("Enter student average:\n");
    scanf("%f", &s.avg);
    printf("Average:%f\n",s.avg);
}