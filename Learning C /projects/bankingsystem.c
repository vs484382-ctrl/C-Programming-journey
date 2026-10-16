#include <stdio.h>

int main() {
    char accountType;
    float rb, wa, remaining_balance;
    int cs;

    printf("What is your account type (c = current account, s = saving account): ");
    scanf(" %c", &accountType);

    printf("Total amount in your account: ");
    scanf("%f", &rb);

    printf("Amount you want to withdraw: ");
    scanf("%f", &wa);

    printf("Enter your CIBIL score: ");
    scanf("%d", &cs);

    if (accountType == 's') {
        remaining_balance = rb - wa;
        if (remaining_balance >= 1000) {
            printf("Your current amount is: %.2f\n", remaining_balance);
            if (cs > 700) {
                puts("You can get loan at rate of 7% per annum");
            } else if (cs > 600 && cs <= 700) {
                puts("You are eligible for loan for annual rate of 10%");
            } else {
                puts("You are not eligible");
            }
        } else {
            puts("You don't have sufficient amount to withdraw.");
        }
    } else if (accountType == 'c') {
        puts("You have overdraft facility upto ₹5000");
        if (rb >= 0) {
            remaining_balance = rb - wa;
            printf("Your transaction has processed and remaining balance is: %.2f\n", remaining_balance);
            if (remaining_balance > -5000) {
                puts("Your withdrawal has successfully done.");
            } else {
                puts("Withdrawal exceeds overdraft limit.");
            }
        } else {
            puts("Invalid balance.");
        }
    } else {
        puts("Invalid account type");
    }
}