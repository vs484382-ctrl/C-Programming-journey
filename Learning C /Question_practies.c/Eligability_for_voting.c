#include <stdio.h>
int main(void)
{
    int x;
    printf("The person age is :");
    scanf("%d",&x);
    if(x>=18)
    {
      puts("The person is eligible for voting ");
      if (x>=60){
        puts("the person is also senior setision");
      }
    }
    else {
          printf("the person is nor setision and not eligible for voting" );
    }
}