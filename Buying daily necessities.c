#include <stdio.h>

int main() {
    int choice;
    float total, price, quantity;
    float amountpaid, change;
    char again;

    do {
        total;

        printf("\nWhat do you want to purchase?:\n");
        printf("1. Vegetable (P54.5/k1)\n");
        printf("2. Fruits (P120-150/k1)\n");
        printf("3. Milk (P90/pack)\n");
        printf("4. Soap (P29.45/bar)\n");
        printf("5. Shampoo and Conditioner (P140/bottle)\n");

        printf("What do you want to purchase? Please select a number: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                price = 54.5;
                printf("Enter quantity in kg: ");
                scanf("%f", &quantity);
                total = price * quantity;
                break;
            case 2:
                price = 135.0;
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
                printf("Invalid choice.\n");
                continue;
        }

        printf("Total Purchase: P%.2f\n", total);
        printf("Enter amount paid: ");
        scanf("%f", &amountpaid);

        if (amountpaid < total) {
            printf("Insufficient amount! No change.\n");
        } else {
            change = amountpaid - total;
            printf("Your Change: P%.2f\n", change);
        }

        printf("Do you want to purchase again? (Y/N): ");
        scanf(" %c", &again);

    } while (again == 'Y' || again == 'y');

    printf("Thank you for shopping!\n");
    
    return 0;
}
