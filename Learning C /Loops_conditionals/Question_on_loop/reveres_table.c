//wap to reverse print the table using loops

#include<stdio.h>

int main(void)
{
    int x;
    printf("give me a value x:");
    scanf("%d",&x);

    for (int i = 10;i>= 1; i--){
        printf("%d x %d =%d\n",x,i,(x*i));
    }
}