#include <stdio.h>
#include <stdlib.h>


/*

9

************1************
***********2*2***********
**********3*3*3**********
*********4*4*4*4*********
********5*5*5*5*5********
*******6*6*6*6*6*6*******
******7*7*7*7*7*7*7******
*****8*8*8*8*8*8*8*8*****
****9*9*9*9*9*9*9*9*9****


*/


int main ()
{

    unsigned char Hight = 0;
    unsigned char Counter1 = 0;
    unsigned char Counter2 = 0;
    unsigned char Counter3 = 0;
    unsigned char Coutner4 = 0;
    scanf("%hhu", &Hight); 

    for (Counter1 = 1; Counter1 <= Hight; Counter1++)
    {
        for (Counter2 = 1; Counter2 <= ((Hight + 4) - Counter1); Counter2++)
        {
            printf("*");
        }

        for (Counter3 = 1; Counter3 <= (Counter1 + Coutner4); Counter3++)
        {
            if(Counter3 % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf("%hhu", Counter1);
            }
        }

        for (Counter2 = 1; Counter2 <= ((Hight + 4) - Counter1); Counter2++)
        {
            printf("*");
        }
        Coutner4++;
        printf("\n");
    }
    return 0;
}