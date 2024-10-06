#include <stdio.h>

int main() {
    int pin = 1234;            // User's correct PIN
    int enteredPin, option;
    float balance = 5000.0;     // Initial balance
    float withdrawAmount, depositAmount;
    
    printf("Welcome to the ATM!\n");

    // Prompt for PIN
    printf("Please enter your 4-digit PIN: ");
    scanf("%d", &enteredPin);

    // Check if entered PIN is correct
    if (enteredPin == pin) {
        printf("\nLogin successful!\n");

        // Display menu options
        printf("ATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Please select an option: ");
        scanf("%d", &option);

        // Using if-else to handle the user's choice
        if (option == 1) {
            // Option 1: Check Balance
            printf("\nYour current balance is: $%.2f\n", balance);
        }
        else if (option == 2) {
            // Option 2: Withdraw Money
            printf("\nEnter the amount to withdraw: $");
            scanf("%f", &withdrawAmount);

            if (withdrawAmount > balance) {
                printf("Insufficient funds! Your current balance is $%.2f.\n", balance);
            }
            else if (withdrawAmount <= 0) {
                printf("Invalid withdrawal amount!\n");
            }
            else {
                balance -= withdrawAmount;
                printf("Withdrawal successful! Your new balance is $%.2f\n", balance);
            }
        }
        else if (option == 3) {
            // Option 3: Deposit Money
            printf("\nEnter the amount to deposit: $");
            scanf("%f", &depositAmount);

            if (depositAmount <= 0) {
                printf("Invalid deposit amount!\n");
            } 
            else {
                balance += depositAmount;
                printf("Deposit successful! Your new balance is $%.2f\n", balance);
            }
        }
        else if (option == 4) {
            // Option 4: Exit
            printf("Thank you for using our ATM. Goodbye!\n");
        }
        else {
            printf("Invalid option! Please try again.\n");
        }
    } 
    else {
        // Incorrect PIN
        printf("Incorrect PIN. Please try again.\n");
    }

    return 0;
}
