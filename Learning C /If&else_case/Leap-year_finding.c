#include <stdio.h>
int main(){
    int A;
    printf (" \n A is a leap year ");
    scanf("%d" , &A);
    if(A%4==0)
    {
    puts("\n Leap year");
    }
    else 
    {
    printf( "Not a Leap year");
    }
    }