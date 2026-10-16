#include<stdio.h>

int main(void)
{
    for(int i = 2;i <= 10;i = i + 2){
        if (i == 8){
            break;
            continue;
        }

        printf("%d ",i);
    }
}