#include <stdio.h>

int main() {
    float x, y;
    char oper;
    printf("enter the first digit ");
    scanf("%f",&x);
    puts("ENTER the second digit ");
    scanf("%f",&y);
    puts("give the charactor operative ");
    scanf("%c",&oper);

    //scanf("%f %f %c", &x, &y, &oper);

    if (oper == '+') {
        printf("The answer = %f\n", x + y);
    } else if (oper == '-') {
        printf("answer is = %f\n", x - y);
    } else if (oper == '*') {
        printf("answer is = %f\n", x * y);
    } else if (oper == '/') {
        printf("ans is = %f\n", x / y);
    } else {
        printf("Invalid operator\n");
    }
}