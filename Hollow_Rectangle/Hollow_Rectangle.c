#include <stdio.h>
#include <stdlib.h>
int main ()
{
    unsigned char Width = 0;
    unsigned char Hight = 0;
    unsigned char Counter1;
    unsigned char Counter2;
    printf("Enter the number of Width : \n");
    scanf("%hhu", &Width);
    printf("Enter the number of Hight : \n");
    scanf("%hhu", &Hight);
    for (Counter1 = 1; Counter1 <= Hight; Counter1++)
    {
        for(Counter2 = 1; Counter2 <= Width; Counter2++)
        {
            if(Counter1 == 1)
            {
                printf("*");
            }else if(Counter1 == Hight)
            {
                printf("*");
            }
            else
            {
                if(Counter2 == 1)
                {
                    printf("*");
                }
                else if(Counter2 == Width)
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
}