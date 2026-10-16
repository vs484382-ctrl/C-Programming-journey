//Finding factorial of number
#include<stdio.h>

int main(void)
{
    int x,prod;
    printf("give which number you want factorial of:\n");
    scanf("%d",&x);
    for(int i = x;i>= 1;i--){
        prod = prod * i;
    }
    printf("%d",prod);
}