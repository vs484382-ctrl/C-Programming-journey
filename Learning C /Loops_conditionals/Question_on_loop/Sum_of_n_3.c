#include<stdio.h>

int main(void)
{
    int counter= 0;
    for( int i = i;i<=1000;i=i+1){
        if (i % 3 == 0){
            counter += 1;// count = count + 1
            //count = count * 1 -> count += 1
        }
    }
    printf("%d",counter);
}