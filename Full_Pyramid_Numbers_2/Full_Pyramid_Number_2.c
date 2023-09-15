#include <stdio.h>
#include <stdlib.h>
/*
6
      1
     121
    12321
   1234321
  123454321
 12345654321

*/

int main ()
{
    unsigned char Hight = 0;
    unsigned char Counter1 = 0;
    unsigned char Counter2 = 0;
    unsigned char Counter3 = 0;
    unsigned char Counter4 = 0;
    unsigned char Counter5 = 0;
    scanf("%hhu", &Hight);
    for (Counter1 = 1; Counter1 <= Hight; Counter1++)
    {
        for (Counter2  = 0; Counter2 <= (Hight - Counter1); Counter2++)
        {
            printf(" ");
        }
        for (Counter3 = 1; Counter3 <= (Counter1 + Counter4); Counter3++)
        {   
            if (Counter3 > Counter1)
            {
                Counter5 += 2;
                if (Counter3 - Counter5 == 0)
                {
                    printf(" ");
                }
                else
                {
                    printf("%hhu", (Counter3 - Counter5));
                }
            }
            else
            {
                printf("%hhu", Counter3);
            }
        }
        Counter5 = 0;
        Counter4++;
        printf("\n");
    }




    return 0;
}