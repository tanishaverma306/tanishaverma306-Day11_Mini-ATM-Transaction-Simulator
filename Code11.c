#include <stdio.h>

int main() {
    int balance = 10000;
    int deposit, withdraw, count = 0, option;

    printf("========= Mini ATM Simulator =========\n");
    printf("Initial Balance: %d\n", balance);

    while (1) {
        printf("\n1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        if (option == 1) {
            printf("Your current balance is: %d\n", balance);
            count++;
        } 
        else if (option == 2) {
            printf("Enter amount to deposit: ");
            scanf("%d", &deposit);
            if (deposit > 0) {
                balance += deposit;
                printf("Amount Deposited Successfully!\n");
                count++;
            } else {
                printf("Invalid deposit amount!\n");
            }
        } 
        else if (option == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%d", &withdraw);
            if (withdraw <= 0) {
                printf("Invalid amount!\n");
            }
            else if (withdraw > balance - 500) {  
                printf("Insufficient balance!\n");
            } 
            else {
                balance -= withdraw;
                printf("Withdrawal Successful! Remaining Balance: %d\n", balance);
                count++;
            }
        } 
        else if (option == 4) {
            printf("Thank you for banking with us!\n");
            break;
        } 
        else {
            printf("Invalid Option! Please try again.\n");
        }
        if (count >= 5) {
            printf("\nTransaction limit reached! Session automatically ended.\n");
            break;
        }
    }

    printf("\n========= Transaction Summary =========\n");
    printf("Total Transactions: %d\n", count);
    printf("Final Balance: %d\n", balance);
    printf("Session Ended.\n");

    return 0;
}
