#include <stdio.h>
void main(){
    int rows = 3 , columns = 3;
    int matrix [3][3]={
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){ 
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
}
}

//😶***print 2 5 9***//   for(int j=1; j<columns-1; j++) change only this😶 


//🤣*****diagonal element****🤣// add if only
//
//for(int i=0; i<rows; i++){ 
// for(int j=0; j<columns; j++){
//        if(i==j){
        

     //RIGHT DIAGONAL//   
//#include <stdio.h>
//void main(){
//    int rows = 3 , columns = 3;
//    int matrix [3][3]={
//    {1, 2, 3},
//    {4, 5, 6},
//    {7, 8, 9}
//};
//
//for(int i=0; i<rows; i++){
//    for(int j=0; j<columns; j++){ 
//        if(i+j==2){                                  
//        printf("%d ", matrix[i][j]);
//    }
//    else{
//        printf("  ");
//    }
//}
//printf("\n");
//}
//}

//😁*******get   1   3
 //                5
 //              7   9 
//if(i+j==2 || i==j)

//for next pattern interchange 'printf 'statement under if 


//***** Print columns using functions***

    #include <stdio.h>
void read2D(int r, int c, int a[][c]){
    printf("Enter elements: ");
    for (int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void display2D(int r, int c, int a[][c]){
    printf("Array elements are:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int r, c;
    printf("Enter row and column size: ");
    scanf("%d%d", &r, &c);
    int a[r][c];
    read2D(r, c, a);
    display2D(r, c, a);
    return 0;
}
