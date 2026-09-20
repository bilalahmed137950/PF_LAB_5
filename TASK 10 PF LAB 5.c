#include <stdio.h>

int main()
{
    char account;
    int transaction;

    printf("Enter Account Type:\n");
    printf("1. Savings\n");
    printf("2. Current\n");

    printf("Enter account type: ");
    scanf(" %c", &account);

    switch (account)
    {
        case '1':
            printf("Savings Account\n");
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("3. Check Balance\n");

            printf("Enter transaction: ");
            scanf("%d", &transaction);

            switch (transaction)
            {
                case 1:
                    printf("Deposit performed in Savings Account");
                    break;

                case 2:
                    printf("Withdrawal performed from Savings Account");
                    break;

                case 3:
                    printf("Savings Account Balance checked");
                    break;

                default:
                    printf("Invalid transaction");
            }
            break;

        case '2':
            printf("Current Account\n");
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("3. Check Balance\n");

            printf("Enter transaction: ");
            scanf("%d", &transaction);

            switch (transaction)
            {
                case 1:
                    printf("Deposit performed in Current Account");
                    break;

                case 2:
                    printf("Withdrawal performed from Current Account");
                    break;

                case 3:
                    printf("Current Account Balance checked");
                    break;

                default:
                    printf("Invalid transaction");
            }
            break;

        default:
            printf("Invalid account type");
    }

    return 0;
}

