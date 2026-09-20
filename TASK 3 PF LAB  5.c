#include <stdio.h>

int main()
{
    int X, Y, Z, W;

    printf("Enter X: ");
    scanf("%d", &X);

    printf("Enter Y: ");
    scanf("%d", &Y);

    printf("Enter Z: ");
    scanf("%d", &Z);

    printf("Enter W: ");
    scanf("%d", &W);

    if (X > Y)
    {
        if (X > Z)
        {
            if (X > W)
            {
                printf("Largest = %d", X);
            }
            else
            {
                printf("Largest = %d", W);
            }
        }
        else
        {
            if (Z > W)
            {
                printf("Largest = %d", Z);
            }
            else
            {
                printf("Largest = %d", W);
            }
        }
    }
    else
    {
        if (Y > Z)
        {
            if (Y > W)
            {
                printf("Largest = %d", Y);
            }
            else
            {
                printf("Largest = %d", W);
            }
        }
        else
        {
            if (Z > W)
            {
                printf("Largest = %d", Z);
            }
            else
            {
                printf("Largest = %d", W);
            }
        }
    }

    return 0;
}

