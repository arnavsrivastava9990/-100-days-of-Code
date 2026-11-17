//Return a structure containing top student's details from a function
#include <stdio.h>

// Define the structure for a student
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function that finds and returns the top-scoring student structure by value
struct Student getTopStudent(struct Student students[], int size) {
    int max_index = 0;

    for (int i = 1; i < size; i++) {
        if (students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }

    // Return the structure directly by value
    return students[max_index];
}

int main() {
    // Declare and initialize an array of 5 students
    struct Student students[5] = {
        {1, "Alice Smith", 88.5},
        {2, "Bob Jones", 92.0},
        {3, "Charlie Brown", 79.5},
        {4, "Diana Prince", 95.0},
        {5, "Ethan Hunt", 84.0}
    };

    // Call the function and catch the returned structure
    struct Student topStudent = getTopStudent(students, 5);

    // Print the results using dot notation
    printf("--- Top Scoring Student ---\n");
    printf("ID   : %d\n", topStudent.id);
    printf("Name : %s\n", topStudent.name);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}