#include <stdio.h>
#include <string.h>

#define FILENAME "telephone_directory.txt"
#define MAX_NAME_LENGTH 50
#define MAX_NUM_LENGTH 15


struct Record {
    char name[MAX_NAME_LENGTH];
    char number[MAX_NUM_LENGTH];
};


void appendData();
void showAllData();
void findData();

int main() {
    int choice;
   
    do {
        printf("\nTelephone Directory Menu\n");
        printf("1. Append Data\n");
        printf("2. Show All Data\n");
        printf("3. Find Data\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
       
        switch (choice) {
            case 1:
                appendData();
                break;
            case 2:
                showAllData();
                break;
            case 3:
                findData();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}


void appendData() {
    FILE *file = fopen(FILENAME, "a");
    if (file == NULL) {
        printf("Error opening file for append.\n");
        return;
    }

    struct Record record;
    printf("Enter name: ");
    scanf(" %[^\n]", record.name); 
    printf("Enter telephone number: ");
    scanf("%s", record.number);

    fprintf(file, "%s %s\n", record.name, record.number);
    fclose(file);

    printf("Data appended successfully.\n");
}


void showAllData() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("Error opening file for read.\n");
        return;
    }

    struct Record record;
    printf("\nTelephone Directory\n");
    while (fscanf(file, "%s %s", record.name, record.number) != EOF) {
        printf("%s: %s\n", record.name, record.number);
    }

    fclose(file);
}


void findData() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("Error opening file for read.\n");
        return;
    }

    char searchNum[MAX_NUM_LENGTH];
    printf("Enter telephone number to search: ");
    scanf("%s", searchNum);

    struct Record record;
    int found = 0;
    while (fscanf(file, "%s %s", record.name, record.number) != EOF) {
        if (strcmp(record.number, searchNum) == 0) {
            printf("Name: %s\n", record.name);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Telephone number not found.\n");
    }

    fclose(file);
}