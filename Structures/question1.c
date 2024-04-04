#include <stdio.h>
struct movies {
    char name[30];
    int date;
    float rating;
};
void flush(){
int c;
while(c!= '\n' && c!=EOF){
    c=getchar();
  }
}
int main(){
    int n;
printf("Enter no. of movies: ");
scanf("%d",&n);
struct movies m[n];
for(int i=0; i<n; i++){
    printf("Enter name of movie: \n");
    scanf("%s",m[i].name);
    flush();
    printf("Enter release date: \n");
    scanf("%d",&m[i].date);
    printf("Enter rating: \n");
    scanf("%f",&m[i].rating);
  }
  printf("\n%15s %15s %15s\n","Name", "Release date", "Rating");
  for(int i=0; i<n; i++){
    printf("%15s %15d %15f\n",m[i].name, m[i].date, m[i].rating);
  }
  return 0;
}