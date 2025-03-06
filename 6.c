#include <stdio.h>
#include <string.h>

// Define a structure to represent an account
struct Account {
    char name[50];   // Account holder's name
    float balance;   // Account balance
};

// Function to transfer amount from an account to the destination account
void transferAmount(struct Account *fromAccount, struct Account *toAccount, float amount) {
    if (fromAccount->balance >= amount) {
        fromAccount->balance -= amount;  // Subtract from source account
        toAccount->balance += amount;    // Add to destination account
        printf("Transferred $%.2f from %s to %s\n", amount, fromAccount->name, toAccount->name);
    } else {
        printf("Insufficient balance in %s's account.\n", fromAccount->name);
    }
}

// Function to print account details
void printAccount(struct Account account) {
    printf("Account Holder: %s\n", account.name);
    printf("Balance: $%.2f\n", account.balance);
}

int main() {
    // Declare destination account
    struct Account destinationAccount;

    // Get the destination account details from the user
    printf("Enter the destination account name: ");
    fgets(destinationAccount.name, sizeof(destinationAccount.name), stdin);
    destinationAccount.name[strcspn(destinationAccount.name, "\n")] = 0; // Remove trailing newline

    printf("Enter the initial balance of the destination account: ");
    scanf("%f", &destinationAccount.balance);

    // Declare variables for the number of source accounts
    int numAccounts;
    printf("Enter the number of source accounts: ");
    scanf("%d", &numAccounts);

    // Create an array of source accounts
    struct Account accounts[numAccounts];

    // Get account details from the user for each source account
    for (int i = 0; i < numAccounts; i++) {
        printf("\nEnter details for Account %d\n", i + 1);
        printf("Enter account holder's name: ");
        getchar();  // To consume the newline left by previous scanf
        fgets(accounts[i].name, sizeof(accounts[i].name), stdin);
        accounts[i].name[strcspn(accounts[i].name, "\n")] = 0; // Remove trailing newline

        printf("Enter the initial balance of %s's account: ", accounts[i].name);
        scanf("%f", &accounts[i].balance);
    }

    // Display initial account balances
    printf("\nInitial Account Balances:\n");
    for (int i = 0; i < numAccounts; i++) {
        printAccount(accounts[i]);
    }
    printAccount(destinationAccount);

    // Perform the transfer from each account to the destination account
    float transferAmountValue;
    for (int i = 0; i < numAccounts; i++) {
        printf("\nEnter amount to transfer from %s to the destination account: $", accounts[i].name);
        scanf("%f", &transferAmountValue);
        transferAmount(&accounts[i], &destinationAccount, transferAmountValue);
    }

    // Display updated account balances
    printf("\nUpdated Account Balances:\n");
    for (int i = 0; i < numAccounts; i++) {
        printAccount(accounts[i]);
    }
    printAccount(destinationAccount);

    return 0;
}

