#include <stdio.h>

struct Student
{
    char name[50];
    int marks;
};

int main()
{
    struct Student s[5];
    int i, total = 0;
    float average;

    // Input student details
    for(i = 0; i < 5; i++)
    {
        printf("Enter student name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);

        total = total + s[i].marks;
    }

    // Calculate average
    average = total / 5.0;

    // Display student details
    printf("\nStudent Details:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Name: %s, Marks: %d\n",
               s[i].name, s[i].marks);
    }

    printf("\nTotal Marks = %d", total);
    printf("\nAverage Marks = %.2f", average);

    return 0;
}
