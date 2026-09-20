#include <stdio.h>

int main()
{
    char light;
    char pedestrian;

    printf("Enter traffic light color (R, Y, G): ");
    scanf(" %c", &light);

    switch (light)
    {
        case 'R':
            printf("Is pedestrian present? (Y/N): ");
            scanf(" %c", &pedestrian);

            switch (pedestrian)
            {
                case 'Y':
                    printf("STOP and WAIT for pedestrians");
                    break;

                case 'N':
                    printf("STOP");
                    break;

                default:
                    printf("Invalid pedestrian choice");
            }
            break;

        case 'G':
            printf("Is pedestrian present? (Y/N): ");
            scanf(" %c", &pedestrian);

            switch (pedestrian)
            {
                case 'Y':
                    printf("GO but WATCH for pedestrians");
                    break;

                case 'N':
                    printf("GO");
                    break;

                default:
                    printf("Invalid pedestrian choice");
            }
            break;

        case 'Y':
            printf("WAIT");
            break;

        default:
            printf("Invalid traffic light color");
    }

    return 0;
}

