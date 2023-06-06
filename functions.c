#include <stdio.h>
#include <stdlib.h>

int marks_summation(int *marks, int no_of_students, char gender) {
    int sum = 0;
    int start_index = (gender == 'b') ? 0 : 1;

    for (int i = start_index; i < no_of_students; i += 2) {
        sum += marks[i];
    }

    return sum;
}

int main() {
    int no_of_students;
    char gender;
    int sum;

    printf("Enter the number of students: ");
    scanf("%d", &no_of_students);

    int *marks = (int *)malloc(no_of_students * sizeof(int));

    // printf("Enter the marks of students: \n");
    for (int student = 0; student < no_of_students; student++) {
        printf("Enter the marks of student: ");
        scanf("%d", (marks + student));
    } 

    printf("What's the gender of the student? (b/g): ");
    scanf(" %c", &gender);

    sum = marks_summation(marks, no_of_students, gender);
    printf("Sum of marks: %d\n", sum);

    free(marks);

    return 0;
}
