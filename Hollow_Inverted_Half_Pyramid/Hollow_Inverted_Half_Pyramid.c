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
            if(Counter1 == 0)
            {
                printf("*");
            }
            else if(Counter1 == (Hight - 1))
            {
                printf("*");
            }else
            {
                if (Counter2 == (Hight - Counter1))
                {
                    printf("*");
                }else if(Counter2 == 1)
                {
                    printf("*");
                }else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;

    return 0;
}