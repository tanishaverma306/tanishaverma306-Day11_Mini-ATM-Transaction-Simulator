This program simulates a simple ATM machine that allows users to:
Check balance
Deposit money
Withdraw money
Exit the system
It also includes a transaction limit (maximum 5 transactions per session).
Features
Displays current account balance
Allows deposits and withdrawals
Prevents over-withdrawal or low-balance transactions
Automatically ends session after 5 transactions
Provides a final transaction summary
 Code Explanation (Line by Line)
#include <stdio.h>
Includes the standard input-output library to use functions like printf() and scanf().
int main() {
The main function , where program execution begins.
int balance = 10000;
int deposit, withdraw, count = 0;
Declares variables:
balance: stores current account balance (₹10,000 initially)
deposit: stores deposit amount entered by user
withdraw: stores withdrawal amount
count: tracks the number of transactions
printf("========= Mini ATM Simulator =========\n");
printf("Initial Balance: ₹10000\n");

Prints the program title and shows the starting balance.
while (1) {

Creates an infinite loop, allowing the user to perform multiple actions until they choose to exit.
printf("1. Check Balance\n");
printf("2. Deposit\n");
printf("3. Withdraw\n");
int option;
printf("Enter your choice:\n");
scanf("%d", &option);

Displays the main menu and stores the user’s selected option in the variable option.

Option 1 — Check Balance
if (option == 1) {
    printf("Your current balance is: %d\n", balance);
    count++;
}

If the user chooses 1, it displays the current balance and increases the transaction count.

Option 2 — Deposit
else if (option == 2) {
    printf("Enter amount to deposit:\n");
    scanf("%d", &deposit);
    printf("Amount Deposited Successfully!");
    balance = balance + deposit;
    count++;
}

If the user chooses 2, they enter an amount to deposit.
That amount is added to the balance, and the transaction count increases.

Option 3 — Withdraw
else if (option == 3) {
    printf("Enter amount to withdraw:\n");
    scanf("%d", &withdraw);

The user enters the amount they want to withdraw.
    if (withdraw > balance || balance < 500) {
        printf("Insufficient Balance!\n");
    } else {
        balance = balance - withdraw;
        count++;
        printf("Withdrawal Successful! Remaining Balance: %d\n", balance);
    }

Checks whether the balance is sufficient for withdrawal.
If not, an “Insufficient Balance” message is shown.
Otherwise, the withdrawal is processed and the balance is updated.

Option 4 — Exit
else if (option == 4) {
    printf("Thank you for banking with us!\n");
    break;
}

If the user chooses 4, the program displays a thank-you message and exits the loop.

Invalid Option
else {
    printf("Invalid Option!\n");
}

If the user enters a number other than 1–4, it shows an error message.

Transaction Limit
if (count > 5) {
    printf("\nTransaction limit reached! Session automatically ended.\n");
    break;
}

If more than 5 transactions are made, the session ends automatically with a message.

Transaction Summary
printf("========= Transaction Summary =========\n");
printf("Final Balance: %d\n", balance);
printf("Total Transactions: %d\n", count);
printf("Session Ended.\n");

After exiting, it displays:
The final balance
Total number of transactions
A closing message
return 0;
}

Ends the program successfully.

 Output
========= Mini ATM Simulator =========
Initial Balance: ₹10000
1. Check Balance
2. Deposit
3. Withdraw
Enter your choice:
