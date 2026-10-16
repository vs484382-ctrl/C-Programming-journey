#include<stdio.h>

int main(void)
{
    int sum = 0;
    int count = 0;
    for (int i = 1;i<=1000;i=i+1){
        if (i % 3 == 0 && i % 7 ==0){
            count += 1;
            sum = sum + 1; //sum += i
            
        }
    }
    printf("sum: %d and count: %d",sum,count);
}