#include <stdio.h>
#include <string.h>

struct Movie {
    int id;
    char name[50];
    int release_date;
    int search_date;
};
int main() {
    struct Movie movies[100];
    int movie_count = 0;
    int choice;

    do {
        printf("\nMovie Management System\n");
        printf("1. Insert Movie\n");
        printf("2. Display Movie Records\n");
        printf("3. Edit Movie Record by ID\n");
        printf("4. Delete Movie by ID\n");
        printf("5. Search Movie by Name or Release Date\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

 switch (choice) {
    case 1:
       printf("Enter Movie ID: ");
       scanf("%d", &movies[movie_count].id);
       printf("Enter Movie Name: ");
       scanf("%s", movies[movie_count].name);
       printf("Enter Release Date: ");
       scanf("%d", &movies[movie_count].release_date);
       movie_count++;
       break;
     case 2:
       printf("\nMovie Records:\n");
       for (int i = 0; i < movie_count; i++) {
           printf("ID: %d, Name: %s, Release Date: %d\n", movies[i].id, movies[i].name, movies[i].release_date);
       }
       break;
     case 3:
        int edit_id;
        printf("Enter ID to Edit: ");
        scanf("%d", &edit_id);
        for (int i = 0; i < movie_count; i++) {
                if (movies[i].id == edit_id) {
                        printf("Enter New Name: ");
                        scanf("%s", movies[i].name);
                        printf("Enter New Release Date: ");
                        scanf("%d", &movies[i].release_date);
                        break;
                    }
                }
                break;
    case 4:
    int delete_id;
    printf("Enter ID to Delete: ");
    scanf("%d", &delete_id);
    int delete_index = -1;
    for (int i = 0; i < movie_count; i++) {
        if (movies[i].id == delete_id) {
            delete_index = i;
            break;
        }
    }
    if (delete_index != -1) {
        for (int i = delete_index; i < movie_count - 1; i++) {
            movies[i] = movies[i + 1];
        }
        movie_count--;
        printf("Movie with ID %d deleted successfully.\n", delete_id);
    } else {
        printf("Movie with ID %d not found.\n", delete_id);
    }
    break;

     case 5:
        char search_name[50];
        int search_date;
        printf("Enter Movie Name to Search: ");
        scanf("%s", search_name);
        printf("Enter Release Date to Search: ");
        scanf("%d", &search_date);
        for (int i = 0; i < movie_count; i++) {
                if (strcmp(movies[i].name, search_name) == 0 || movies[i].release_date == search_date) {
                        printf("ID: %d, Name: %s, Release Date: %d\n", movies[i].id, movies[i].name, movies[i].release_date);
                    }
                }
                break;
     case 6:
        printf("Exiting... Thank you!\n");
        break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
