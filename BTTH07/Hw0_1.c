#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENTS 100

typedef struct 
{
    char name[51];
    char id[10];
    float GPA;
} Student;

void add(Student* sv);
void file(Student sv);
void studentManagement(Student* sv);
void deleteStudentFromFile(const char* id);

void add(Student* sv) {
    printf("\nEnter student ID: ");
    scanf(" %9s", sv->id);
    printf("Enter student name: ");
    scanf(" %50[^\n]", sv->name);
    printf("Enter student GPA: ");
    scanf("%f", &(sv->GPA));
}

void file(Student sv) {
    FILE* file;
    file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }
    fprintf(file, "%s %s %.2f\n", sv.name, sv.id, sv.GPA);
    fclose(file);
}

void deleteStudentFromFile(const char* id) {
    FILE* file;
    FILE* tempFile;
    char line[100];
    int found = 0;

    file = fopen("data.txt", "r");
    tempFile = fopen("temp.txt", "w");

    if (file == NULL || tempFile == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        char studentId[10];
        sscanf(line, "%*s %s", studentId);

        if (strcmp(studentId, id) == 0) {
            found = 1;
            continue;
        }

        fputs(line, tempFile);
    }

    fclose(file);
    fclose(tempFile);

    if (found) {
        remove("data.txt");
        rename("temp.txt", "data.txt");
        printf("Student with ID %s deleted from file.\n", id);
    } else {
        remove("temp.txt");
        printf("Student with ID %s not found in file.\n", id);
    }
}

void studentManagement(Student* sv) {
    int choice, numStudents = 0;

    do {
        printf("\nStudent Management:\n");
        printf("1. Add student\n");
        printf("2. Display student information\n");
        printf("3. Update student information\n");
        printf("4. Delete student from file\n");
        printf("5. Write data to file\n");
        printf("0. Exit\n");

        if (numStudents > 0) {
            printf("Note: If you want to update student information, please refer to the student's index in option 2.\n");
        }

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add(&sv[numStudents]);
                file(sv[numStudents]);
                numStudents++;
                break;
            case 2:
                printf("\nStudent Information:\n");
                for (int i = 0; i < numStudents; i++) {
                    printf("Index: %d\n", i);
                    printf("Name: %s\n", sv[i].name);
                    printf("ID: %s\n", sv[i].id);
                    printf("GPA: %.2f\n", sv[i].GPA);
                    printf("----------------------------\n");
                }
                break;
            case 3:
                if (numStudents > 0) {
                    int index;
                    printf("\nEnter student index to update: ");
                    scanf("%d", &index);
                    if (index >= 0 && index < numStudents) {
                        add(&sv[index]);
                        file(sv[index]);
                    } else {
                        printf("Invalid index.\n");
                    }
                } else {
                    printf("No students added yet.\n");
                }
                break;
            case 4:
                if (numStudents > 0) {
                    char id[10];
                    printf("\nEnter student ID to delete: ");
                    scanf(" %9s", id);
                    deleteStudentFromFile(id);
                } else {
                    printf("No students added yet.\n");
                }
                break;
            case 5:
                printf("\nData written to file.\n");
                for (int i = 0; i < numStudents; i++) {
                    file(sv[i]);
                }
                break;
            case 0:
                printf("Exiting.\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 0);
}

int main() {
    Student sv[MAX_STUDENTS];
    studentManagement(sv);
    return 0;
}