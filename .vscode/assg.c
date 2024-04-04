/*#include <stdio.h>
int minOperations(int fruits[], int n) {
    int operations = 0;
    for (int i = 0; i < n; i++) {
        while (fruits[i] > 0) {
            if (fruits[i] % 2 == 0) {
                fruits[i] /= 2;
                operations++;
            } else {
                fruits[i]--;
                operations++;
            }
        }
    }
    return operations;
}
int main() {
    int fruits1[] = {2, 3}; // Example 1
    int n1 = sizeof(fruits1) / sizeof(fruits1[0]);
    printf("Minimum operations for Example 1: %d\n", minOperations(fruits1, n1));

    int fruits2[] = {12, 3, 17, 15, 8}; // Example 2
    int n2 = sizeof(fruits2) / sizeof(fruits2[0]);
    printf("Minimum operations for Example 2: %d\n", minOperations(fruits2, n2));

    int fruits3[] = {16, 16, 16}; // Example 3
    int n3 = sizeof(fruits3) / sizeof(fruits3[0]);
    printf("Minimum operations for Example 3: %d\n", minOperations(fruits3, n3));
    return 0;
}*/

//***********

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 100
#define MAX_NAME 50
#define MAX_PHONE 15
#define MAX_COMPANY 50
#define MAX_EMAIL 50

char contacts[MAX_CONTACTS][MAX_NAME];
char phoneNumbers[MAX_CONTACTS][MAX_PHONE];
char companies[MAX_CONTACTS][MAX_COMPANY];
char emails[MAX_CONTACTS][MAX_EMAIL];
int top = -1;

void push() {
    if (top == MAX_CONTACTS - 1) {
        printf("Contact list is full.\n");
    } else {
        top++;
        printf("Enter Name: ");
        scanf("%s", contacts[top]);
        printf("Enter Phone Number: ");
        scanf("%s", phoneNumbers[top]);
        printf("Enter Company: ");
        scanf("%s", companies[top]);
        printf("Enter Email: ");
        scanf("%s", emails[top]);
        printf("Contact added successfully.\n");
    }
}
void listContacts() {
    if (top == -1) {
        printf("Contact list is empty.\n");
    } else {
        printf("Contact List:\n");
        for (int i = 0; i <= top; i++) {
            printf("Name: %s, Phone: %s, Company: %s, Email: %s\n", contacts[i], phoneNumbers[i], companies[i], emails[i]);
        }
    }
}
void searchContacts(char searchKey[]) {
    int found = 0;
    for (int i = 0; i <= top; i++) {
        if (strcmp(contacts[i], searchKey) == 0 || strcmp(phoneNumbers[i], searchKey) == 0) {
            printf("Contact found:\nName: %s, Phone: %s, Company: %s, Email: %s\n", contacts[i], phoneNumbers[i], companies[i], emails[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("Contact not found.\n");
    }
}
void editContact(int index) {
    printf("Enter new Name: ");
    scanf("%s", contacts[index]);
    printf("Enter new Phone Number: ");
    scanf("%s", phoneNumbers[index]);
    printf("Enter new Company: ");
    scanf("%s", companies[index]);
    printf("Enter new Email: ");
    scanf("%s", emails[index]);
    printf("Contact edited successfully.\n");
}
void deleteContact(int index) {
    for (int i = index; i < top; i++) {
        strcpy(contacts[i], contacts[i + 1]);
        strcpy(phoneNumbers[i], phoneNumbers[i + 1]);
        strcpy(companies[i], companies[i + 1]);
        strcpy(emails[i], emails[i + 1]);
    }
    top--;
    printf("Contact deleted successfully.\n");
}
int main() {
    int choice, index;
    char searchKey[MAX_NAME];

    while (1) {
        printf("\nContact List Program\n");
        printf("1. Add New Contact\n2. List All Contacts\n3. Search Contacts\n4. Edit Contact\n5. Delete Contact\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                listContacts();
                break;
            case 3:
                printf("Enter Name or Phone Number to search: ");
                scanf("%s", searchKey);
                searchContacts(searchKey);
                break;
            case 4:
                printf("Enter index of contact to edit: ");
                scanf("%d", &index);
                editContact(index);
                break;
            case 5:
                printf("Enter index of contact to delete: ");
                scanf("%d", &index);
                deleteContact(index);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}