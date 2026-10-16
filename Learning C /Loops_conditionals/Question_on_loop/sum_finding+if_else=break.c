#include<stdio.h>

int main(void)
{
    int count = 0;
    int sum = 0;
    for (int i = 1;i <= 10000;i = i + 1){
        if(i%3 == 0 && i%5 == 0 && i%7 == 0){
            sum += i;
            count++;
            if(count == 10){
                break;
            }
        }
    }
    printf("sum:%d and count:%d",sum,count);
}