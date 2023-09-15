#include <stdio.h>
#include <stdlib.h>

/*
Enter the hight of pyramid : 
6
     *
    * *
   *   *
  *     *
 *       *
***********

*/
int main ()
{
    unsigned char Hight = 0;
    unsigned char Counter1 = 0;
    unsigned char Counter2 = 0;
    unsigned char Counter3 = 0;
    unsigned char Counter4 = 0;
    printf("Enter the hight of pyramid : \n");
    scanf_s("%hhu", &Hight);
    for (Counter1 = 0; Counter1 < Hight; Counter1++)
    {   
        for (Counter2 = (Hight - Counter1); Counter2 > 1; Counter2--)
        {
            printf(" ");
        }
        for (Counter3 = 0; Counter3 <= (Counter1 + Counter4); Counter3++)
        {
            if(Counter1 == 0)
            {
                printf("*");
            }
            else if (Counter1 == (Hight - 1))
            {
                printf("*");
            }
            else
            {
                if(Counter3 == 0)
                {
                    printf("*");
                }
                else if (Counter3 == (Counter1 + Counter4))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            
        }
        Counter4++;
        printf("\n");
    }


    return 0;
}