#include <stdio.h>

int main() {
    int choice, lastChoice;
    float total, price, quantity, lastQuantity;
    float amountPaid, change;
    char option;

    do {
        printf("\nChoose an option:\n");
        printf("N - New Purchase\n");
        printf("R - Rebuy last item\n");
        printf("E - Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &option);

        if (option == 'E' || option == 'e') {
            break;
        }

        if (option == 'N' || option == 'n') {
            printf("\nWhat do you want to purchase?:\n");
            printf("1. Vegetable (P54.5/kg)\n");
            printf("2. Fruits (P120-P150/kg)\n");
            printf("3. Milk (P90/pack)\n");
            printf("4. Soap (P29.45/bar)\n");
            printf("5. Shampoo and Conditioner (P140/bottle)\n");

            printf("\nPlease select a number: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    price = 54.5;
                    printf("Enter quantity in kg: ");
                    scanf("%f", &quantity);
                    break;
                case 2:
                    price = 135.0;
                    printf("Enter quantity in kg: ");
                    scanf("%f", &quantity);
                    break;
                case 3:
                    price = 90.0;
                    printf("Enter number of packs: ");
                    scanf("%f", &quantity);
                    break;
                case 4:
                    price = 29.45;
                    printf("Enter number of bars: ");
                    scanf("%f", &quantity);
                    break;
                case 5:
                    price = 140.0;
                    printf("Enter number of bottles: ");
                    scanf("%f", &quantity);
                    break;
                default:
                    printf("Invalid choice, please try again.\n");
                    continue;
            }

            lastChoice = choice;
            lastQuantity = quantity;

        } else if (option == 'R' || option == 'r') {
            choice = lastChoice;
            quantity = lastQuantity;

            switch (choice) {
                case 1: price = 54.5; break;
                case 2: price = 135.0; break;
                case 3: price = 90.0; break;
                case 4: price = 29.45; break;
                case 5: price = 140.0; break;
                default:
                    printf("No previous purchase to rebuy.\n");
                    continue;
            }

            printf("\nRe-buying last item (Choice %d, Quantity %.2f)\n", choice, quantity);
        } else {
            printf("Invalid option. Please choose again.\n");
            continue;
        }

        total = price * quantity;
        printf("\nTotal Purchase: P%.2f\n", total);
        printf("Enter amount paid: ");
        scanf("%f", &amountPaid);

        if (amountPaid < total) {
            printf("Insufficient amount! No change.\n");
        } else {
            change = amountPaid - total;
            printf("Your change: P%.2f\n", change);
        }

    } while (1);

    printf("\nThank you for shopping! Goodbye.\n");

    return 0;
}
