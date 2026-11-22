
#include <stdio.h>

struct Student
{
    char name[50];
    int age;
};

void InsertionS(struct Student students[], int length)
{
    for (int i = 1; i < length; ++i)
    {
        struct Student key = students[i];
        int j = i - 1;

        // Compare students by age.
        while (j >= 0 && students[j].age > key.age)
        {
            // Shift the entire structure to the right.
            students[j + 1] = students[j];
            --j;
        }

        // Insert the student into the correct position.
        students[j + 1] = key;
    }
}

int main(void)
{
    struct Student students[] =
    {
        {"Alex", 22},
        {"John", 19},
        {"Mike", 25},
        {"Anna", 20}
    };

    int size = sizeof(students) / sizeof(students[0]);

    InsertionS(students, size);

    printf("Students sorted by age:\n");

    for (int i = 0; i < size; ++i)
    {
        printf("%s - %d\n", students[i].name, students[i].age);
    }

    return 0;
}
