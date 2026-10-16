#include<stdio.h>

int main(void)
{
    int num, sum = 0,remainder;
    printf("enter a number:");
    scanf("%d",&num);
    int original_num = num;
    while ( num !=0){
        remainder= num % 10; // get the last digit
        sum +=remainder;     // add the digit to the sum
        num /= 10;           //remove the last digit  
    }
    printf("sum of digits of %d = %d\n",original_num,sum);
}