#include <stdio.h>

int main() {
    char name[50], course[50];
    int age;

    printf("Enter the name: ");
    scanf("%49s", name);

    printf("Enter the age: ");
    scanf("%d", &age);

    printf("Enter the course: ");
    scanf("%49s", course);

    printf("Name is %s\nAge is %d\nCourse is %s\n", name, age, course);
    return 0;
}