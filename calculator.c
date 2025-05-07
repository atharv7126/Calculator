#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    do {
        printf("----------- Simple Calculator ----------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Remainder\n");
        printf("6. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter the value of A: ");
            scanf("%lf", &num1);
            printf("Enter the value of B: ");
            scanf("%lf", &num2);
        } else if (choice != 6) {
            printf("OOPS! Invalid operation choice.\n Please enter a number between 1 and 6.\n");
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("RESULT: %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("RESULT: %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("RESULT: %.2lf\n", result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("ERROR: Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("RESULT: %.2lf\n", result);
                }
                break;
            case 5:
                if ((int)num2 == 0) {
                    printf("ERROR: Division by zero is not allowed.\n");
                } else {
                    int rem = (int)num1 % (int)num2;
                    printf("REMAINDER: %d\n", rem);
                }
                break;
            case 6:
                printf("Exiting the calculator.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
