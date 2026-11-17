//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

// Define the structure for a student
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function that accepts a pointer to a Student structure and prints its members
void printStudent(const struct Student *s) {
    printf("--- Student Details ---\n");
    printf("ID   : %d\n", s->id);
    printf("Name : %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
}

int main() {
    // Declare and initialize a student variable
    struct Student student1 = {1, "Alice Smith", 88.5};

    // Pass the memory address of the structure to the function
    printStudent(&student1);

    return 0;
}