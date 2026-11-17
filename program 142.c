//Store details of 5 students in an array of structures and print all.
#include <stdio.h>

// Define the structure for a student
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    // Declare an array of structures to store 5 students
    struct Student students[5] = {
        {1, "Alice Smith", 88.5},
        {2, "Bob Jones", 92.0},
        {3, "Charlie Brown", 79.5},
        {4, "Diana Prince", 95.0},
        {5, "Ethan Hunt", 84.0}
    };

    printf("--- Student Details ---\n\n");
    printf("%-5s | %-20s | %-6s\n", "ID", "Name", "Marks");
    printf("------------------------------------\n");

    // Loop through the array and print each student's details
    for (int i = 0; i < 5; i++) {
        printf("%-5d | %-20s | %-6.2f\n", 
               students[i].id, 
               students[i].name, 
               students[i].marks);
    }

    return 0;
}