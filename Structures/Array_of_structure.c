#include <stdio.h>
    struct student{                         
        int rollno;
        char name[30];
        float marks;
    };
    int main (){
    int i;
    struct student list[3];
    for(i=0; i<3; i++){
         printf("Enter name of student:");
         scanf("%s", list[i].name);
         printf("Enter student roll no:"); 
         scanf("%d", &list[i].rollno);
         printf("Enter marks: ");
         scanf("%f",&list[i].marks);
    }
    printf("\n%15s %15s %15s\n", "Name","RollNo","Marks");
    for(i=0; i<3; i++){
        printf("%15s %15d %15f\n",list[i].name, list[i].rollno, list[i].marks);
    }
    return 0; 
}   