#include <stdio.h>
#include <stdlib.h>


int main ()
{
   unsigned char Hight = 0;
    unsigned char Counter1 = 0;
    unsigned char Counter2 = 0;
    printf("Enter the number of hight : \n");
    scanf("%hhu", &Hight);
    for (Counter1 = 0; Counter1 < Hight; Counter1++)
    {
        for(Counter2 = (Hight - Counter1); Counter2 >= 1; Counter2--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0; 
}