#include <stdio.h>
#include <ctype.h>

int main(void) {
    const char *items[5] = {
        "Vegetable (25.50/KL)",
        "Meat (95.75/KL)",
        "Milk (90.25)",
        "Soap (25.00)",
        "Shampoo and Conditioner (140/bottle)"
    };
    double prices[5] = {25.50, 95.75, 90.25, 25.00, 140.00};
    double grand_total = 0, session_total, qty;
    char again;

    do {
        session_total = 0;
        for (int i = 0; i < 5; i++) {
            printf("%s = ", items[i]);
            scanf("%lf", &qty);
            session_total += qty * prices[i];
        }
        grand_total += session_total;
        printf("Total this round: %.2f\n", session_total);

        do {
            printf("Purchase again (Y/N)? ");
            scanf(" %c", &again);
            again = toupper(again);
        } while (again != 'Y' && again != 'N');
    } while (again == 'Y');

    printf("Final total purchase: %.2f\n", grand_total);
    return 0;
}