#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to authenticate user PIN
bool loginUser(int correctPin) {
    int enteredPin;
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == correctPin) {
            printf("Login successful!\n");
            return true;
        } else {
            attempts--;
            printf("Incorrect PIN. Attempts remaining: %d\n", attempts);
        }
    }
    printf("Too many incorrect attempts. Access denied.\n");
    return false;
}

// Function to display the main ATM transaction menu
void displayMenu() {
    printf("\n====== ATM MENU ======\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Select an option (1-4): ");
}

// Function to check and display the current balance
void checkBalance(double balance) {
    printf("\nYour current balance is: Ksh%.2f\n", balance);
}

// Function to handle deposits and return the updated balance
double depositMoney(double balance) {
    double amount;
    printf("\nEnter amount to deposit: Ksh");
    scanf("%lf", &amount);

     if (amount <= 0) {
        printf("Invalid amount. Transaction canceled.\n");
    } else {
        balance += amount;
        printf("Successfully deposited Ksh%.2f\n", amount);
    }
    return balance;
}

// Function to handle withdrawals and return the updated balance
double withdrawMoney(double balance) {
    double amount;
    printf("\nEnter amount to withdraw: Ksh");
    scanf("%lf", &amount);

    if (amount <= 0) {
        printf("Invalid amount. Transaction canceled.\n");
    } else if (amount > balance) {
        printf("Error: Insufficient balance. Current balance is Ksh%.2f\n", balance);
    } else {
        balance -= amount;
        printf("Successfully withdrew Ksh%.2f\n", amount);
    }
    return balance;
}

int main() {
    // Set up initial test values
    const int CORRECT_PIN = 3372;
    double accountBalance = 1000.00;
    int choice;

    // Step 1: Login Verification
    if (!loginUser(CORRECT_PIN)) {
        return 0;
    }

    // Step 5: Perform multiple transactions until user exits
    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Step 2: Check current balance
                checkBalance(accountBalance);
                break;

            case 2:
                // Step 3: Deposit money
                accountBalance = depositMoney(accountBalance);
                break;
            case 3:
                // Step 4: Withdraw money with validation
                accountBalance = withdrawMoney(accountBalance);
                break;
            case 4:
                printf("\nThank you for using our ATM. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice. Please select a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}
