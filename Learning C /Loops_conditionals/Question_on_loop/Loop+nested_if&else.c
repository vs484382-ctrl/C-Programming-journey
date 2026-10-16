#include <stdio.h>
int main()
{
    int count = 0, sum = 0;
    for (int i = 0; i <=10000; i++) {
    if (i%3==0 && i%5==0 && i%7==0) {
    sum = sum + i;
    count = count + 1 ;
    if (count ==10) {
    break; 
    printf("sum %d \n count %d \n", sum,count); 
    }  
    }  
    }
    printf("sum %d\ncount %d\n", sum, count);
}
// First 10 number divide by 3,5,7 and use br