#include <stdio.h>

int main()
{
    char department;
    int semester;

    printf("Enter Department (C for Computer, E for Electrical, B for Business): ");
    scanf(" %c", &department);

    printf("Enter Semester (1, 2, or 3): ");
    scanf("%d", &semester);

    switch (department)
    {
        case 'C':
            switch (semester)
            {
                case 1:
                    printf("Course: Programming Fundamentals");
                    break;

                case 2:
                    printf("Course: Object Oriented Programming");
                    break;

                case 3:
                    printf("Course: Data Structures");
                    break;

                default:
                    printf("Invalid semester");
            }
            break;

        case 'E':
            switch (semester)
            {
                case 1:
                    printf("Course: Basic Electronics");
                    break;

                case 2:
                    printf("Course: Circuit Analysis");
                    break;

                case 3:
                    printf("Course: Digital Logic Design");
                    break;

                default:
                    printf("Invalid semester");
            }
            break;

        case 'B':
            switch (semester)
            {
                case 1:
                    printf("Course: Introduction to Business");
                    break;

                case 2:
                    printf("Course: Accounting");
                    break;

                case 3:
                    printf("Course: Marketing");
                    break;

                default:
                    printf("Invalid semester");
            }
            break;

        default:
            printf("Invalid department");
    }

    return 0;
}

