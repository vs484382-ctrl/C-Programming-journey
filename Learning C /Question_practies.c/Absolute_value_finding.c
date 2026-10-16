#include <stdio.h>
int main()
{
    int x,y;
    puts(" The Absolute value : ");
    scanf("%d",&x);
    if (x<0){
    y=(-1)*x;
    printf(" The answer is %d :",y);
    }
    else 
    if (x>0){
    printf(" The answer is %d",x );
    }
}