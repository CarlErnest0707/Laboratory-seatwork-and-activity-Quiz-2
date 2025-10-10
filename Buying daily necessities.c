#include <stdio.h>

int main() {
    int choice;
    float total, price, quantity;
    float amountPaid, change;
    char again;

    do {
        // Display available items
        printf("\nWhat do you want to purchase?:\n");
        printf("1. Vegetable (P54.5/kg)\n");
        printf("2. Fruits (P120-P150/kg)\n");
        printf("3. Milk (P90/pack)\n");
        printf("4. Soap (P29.45/bar)\n");
        printf("5. Shampoo and Conditioner (P140/bottle)\n");

        printf("\nPlease select a number: ");
        scanf("%d", &choice);

        // Determine the price based on the choice
        switch (choice) {
            case 1:
                price = 54.5;
                printf("Enter quantity in kg: ");
                scanf("%f", &quantity);
                total = price * quantity;
                break;
            case 2:
                price = 135.0;  // Average price for fruits
                printf("Enter quantity in kg: ");
                scanf("%f", &quantity);
                total = price * quantity;
                break;
            case 3:
                price = 90.0;
                printf("Enter number of packs: ");
                scanf("%f", &quantity);
                total = price * quantity;
                break;
            case 4:
                price = 29.45;
                printf("Enter number of bars: ");
                scanf("%f", &quantity);
                total = price * quantity;
                break;
            case 5:
                price = 140.0;
                printf("Enter number of bottles: ");
                scanf("%f", &quantity);
                total = price * quantity;
                break;
            default:
                printf("Invalid choice, please try again.\n");
                continue;  // Skip the rest of the loop and ask for a valid choice
        }

        // Display total and handle payment
        printf("\nTotal Purchase: P%.2f\n", total);
        printf("Enter amount paid: ");
        scanf("%f", &amountPaid);

        // Check if the amount paid is sufficient
        if (amountPaid < total) {
            printf("Insufficient amount! No change.\n");
        } else {
            change = amountPaid - total;
            printf("Your change: P%.2f\n", change);
        }

        // Ask if the user wants to continue shopping
        printf("\nDo you want to purchase again? (Y/N): ");
        scanf(" %c", &again);  // The space before %c to catch newline character from previous input

    } while (again == 'Y' || again == 'y');  // Continue if the user says 'Y' or 'y'

    // Thank you message when the loop ends
    printf("\nThank you for shopping! Goodbye.\n");

    return 0;
}
