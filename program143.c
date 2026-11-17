//Find and print the student with the highest marks
#include <stdio.h>

// Define the structure for a student
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    // Declare and initialize an array of structures for 5 students
    struct Student students[5] = {
        {1, "Alice Smith", 88.5},
        {2, "Bob Jones", 92.0},
        {3, "Charlie Brown", 79.5},
        {4, "Diana Prince", 95.0},
        {5, "Ethan Hunt", 84.0}
    };

    // Assume the first student has the highest marks initially
    int max_index = 0;

    // Loop through the remaining students to find the highest marks
    for (int i = 1; i < 5; i++) {
        if (students[i].marks > students[max_index].marks) {
            max_index = i; // Update index if a higher score is found
        }
    }

    // Print the details of the top-scoring student
    printf("--- Top Scoring Student ---\n\n");
    printf("ID   : %d\n", students[max_index].id);
    printf("Name : %s\n", students[max_index].name);
    printf("Marks: %.2f\n", students[max_index].marks);

    return 0;
}