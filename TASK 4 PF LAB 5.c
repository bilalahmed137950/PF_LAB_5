#include <stdio.h>

int main()
{
    int units;
    char type;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("Enter connection type (D for Domestic / C for Commercial): ");
    scanf(" %c", &type);

    if (type == 'D')
    {
        if (units <= 100)
        {
            bill = units * 5;
        }
        else
        {
            if (units <= 300)
            {
                bill = (100 * 5) + ((units - 100) * 8);
            }
            else
            {
                bill = (100 * 5) + (200 * 8) + ((units - 300) * 10);
            }
        }

        printf("Total Bill = %.2f", bill);
    }
    else
    {
        if (type == 'C')
        {
            if (units <= 100)
            {
                bill = units * 8;
            }
            else
            {
                if (units <= 300)
                {
                    bill = (100 * 8) + ((units - 100) * 10);
                }
                else
                {
                    bill = (100 * 8) + (200 * 10) + ((units - 300) * 12);
                }
            }

            printf("Total Bill = %.2f", bill);
        }
        else
        {
            printf("Invalid connection type");
        }
    }

    return 0;
}

