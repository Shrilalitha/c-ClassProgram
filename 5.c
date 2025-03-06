//#include <stdio.h>
//#include <string.h>
//
//// Define a structure to represent a user
//struct User {
//    char name[50];    // User's name
//    float balance;    // User's account balance
//};
//
//// Function to print user information
//void printUser(struct User user) {
//    printf("\nUser Information:\n");
//    printf("Name: %s\n", user.name);
//    printf("Balance: $%.2f\n", user.balance);
//}
//
//int main() {
//    // Create a user and initialize the structure
//    struct User user1;
//
//    // Get user details from input
//    printf("Enter the user's name: ");
//    fgets(user1.name, sizeof(user1.name), stdin);
//    user1.name[strcspn(user1.name, "\n")] = 0; // Remove the trailing newline character
//
//    printf("Enter the user's balance: ");
//    scanf("%f", &user1.balance);
//
//    // Print the user's details
//    printUser(user1);
//
//    return 0;
//}
//
