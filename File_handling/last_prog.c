#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(){
    int i=0, q1,q2,q3;
    char fname[30];
    FILE *ifp, *ofp;
    ifp = fopen("input.txt","r");
    ofp = fopen("output.txt","w");

    if(ifp == NULL || ofp == NULL){
        printf("Error while opening file.\n");
        exit(0);
    }
    while(!feof(ifp))
    {
        fscanf(ifp, "%s%d%d%d",fname,&q1,&q2,&q3);
        printf("%s %d %d %d\n",fname,q1,q2,q3);
        fprintf(ofp,"%s %d %d %d\n",fname,q1,q2,q3);
    }
    printf("Copied the file\n");
    printf("\n");
    fclose(ofp);
    fclose(ifp);
}