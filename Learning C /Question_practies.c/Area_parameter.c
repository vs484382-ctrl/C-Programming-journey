#include <stdio.h>
int main()
{
    int l,b,A,P;
    printf("Area and perimeter \n");
    scanf ("%d %d", &l,&b);
    A=l*b, P=2*(l+ b);
    if ( A>P){
    printf("\nArea is greater");
    }
    else if(A<P){
    printf(" Area is lesser");
    }
}