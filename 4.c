//#include <stdio.h>
//
//int main() {
//    // Declare variables for user 1 and user 2 balances
//    float user1_balance = 1000.0;
//    float user2_balance = 500.0;
//
//    // Declare the amount to transfer
//    float transfer_amount;
//
//    // Display initial balances
//    printf("User 1 Balance: $%.2f\n", user1_balance);
//    printf("User 2 Balance: $%.2f\n", user2_balance);
//
//    // Ask for the transfer amount
//    printf("\nEnter the amount to transfer from User 1 to User 2: $");
//    scanf("%f", &transfer_amount);
//
//    // Check if user 1 has enough balance for the transfer
//    if (transfer_amount <= user1_balance) {
//        // Perform the transfer
//        user1_balance -= transfer_amount;
//        user2_balance += transfer_amount;
//
//        // Display updated balances
//        printf("\nTransfer Successful!\n");
//        printf("Updated User 1 Balance: $%.2f\n", user1_balance);
//        printf("Updated User 2 Balance: $%.2f\n", user2_balance);
//    } else {
//        printf("\nInsufficient funds in User 1's account.\n");
//    }
//
//    return 0;
//}
