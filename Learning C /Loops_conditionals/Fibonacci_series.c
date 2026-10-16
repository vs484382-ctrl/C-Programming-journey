#include<stdio.h>

int main(void)
{
    int a = 0;
    int b = 1;
    int sum = 0;

    for (int i = 1;i <= 10;i++){
        printf("%d ",a);
        sum = a + b;
        a = b;
        b = sum;
    }
}