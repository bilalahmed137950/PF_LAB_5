#include <stdio.h>

int main()
{
    int mode;
    int choice;
    char op;
    float num1, num2, result;

    printf("Enter mode (1 for Basic Operations, 2 for Power/Root): ");
    scanf("%d", &mode);

    switch (mode)
    {
        case 1:
            printf("Enter first number: ");
            scanf("%f", &num1);

            printf("Enter second number: ");
            scanf("%f", &num2);

            printf("Enter operator (+, -, *, /): ");
            scanf(" %c", &op);

            switch (op)
            {
                case '+':
                    result = num1 + num2;
                    printf("Result = %.2f", result);
                    break;

                case '-':
                    result = num1 - num2;
                    printf("Result = %.2f", result);
                    break;

                case '*':
                    result = num1 * num2;
                    printf("Result = %.2f", result);
                    break;

                case '/':
                    if (num2 != 0)
                    {
                        result = num1 / num2;
                        printf("Result = %.2f", result);
                    }
                    else
                    {
                        printf("Cannot divide by zero");
                    }
                    break;

                default:
                    printf("Invalid operator");
            }

            break;

        case 2:
            printf("Enter 1 for Square or 2 for Square Root: ");
            scanf("%d", &choice);

            printf("Enter a number: ");
            scanf("%f", &num1);

            switch (choice)
            {
                case 1:
                    result = num1 * num1;
                    printf("Square = %.2f", result);
                    break;

                case 2:
                    printf("Square root cannot be calculated without sqrt()");
                    break;

                default:
                    printf("Invalid choice");
            }

            break;

        default:
            printf("Invalid mode");
    }

    return 0;
}

