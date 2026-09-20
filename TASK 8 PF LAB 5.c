#include <stdio.h>

int main()
{
    int category;
    int item;

    printf("Restaurant Menu\n");
    printf("1. Beverages\n");
    printf("2. Main Course\n");
    printf("3. Desserts\n");

    printf("Enter category: ");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("Beverages\n");
            printf("1. Tea\n");
            printf("2. Coffee\n");
            printf("3. Juice\n");

            printf("Enter item: ");
            scanf("%d", &item);

            switch (item)
            {
                case 1:
                    printf("Tea - Price: 100");
                    break;

                case 2:
                    printf("Coffee - Price: 150");
                    break;

                case 3:
                    printf("Juice - Price: 200");
                    break;

                default:
                    printf("Invalid item");
            }
            break;

        case 2:
            printf("Main Course\n");
            printf("1. Biryani\n");
            printf("2. Burger\n");
            printf("3. Pizza\n");

            printf("Enter item: ");
            scanf("%d", &item);

            switch (item)
            {
                case 1:
                    printf("Biryani - Price: 300");
                    break;

                case 2:
                    printf("Burger - Price: 400");
                    break;

                case 3:
                    printf("Pizza - Price: 800");
                    break;

                default:
                    printf("Invalid item");
            }
            break;

        case 3:
            printf("Desserts\n");
            printf("1. Ice Cream\n");
            printf("2. Cake\n");
            printf("3. Custard\n");

            printf("Enter item: ");
            scanf("%d", &item);

            switch (item)
            {
                case 1:
                    printf("Ice Cream - Price: 150");
                    break;

                case 2:
                    printf("Cake - Price: 200");
                    break;

                case 3:
                    printf("Custard - Price: 120");
                    break;

                default:
                    printf("Invalid item");
            }
            break;

        default:
            printf("Invalid category");
    }

    return 0;
}

