#include <stdio.h>
#include <stdlib.h>

/*

6

*     
**    
***   
****  
***** 
******
***** 
****  
***   
**    
*

*/


int main ()
{
    unsigned char Hight = 0;
    unsigned char Counter1 = 0;
    unsigned char Counter2 = 0;
    unsigned char Counter3 = 0;
    unsigned char Counter4 = 0;
    scanf_s("%hhu", &Hight);
    for (Counter1 = 1; Counter1 <= Hight; Counter1++)
    {
        if (Counter1 == Hight)
        {
                break;
        }
        for (Counter2 = 1; Counter2 <= (Counter1); Counter2++)
        {                    
            printf("*");
        }
        printf("\n");
        
    }
  
    for (Counter1 = 1; Counter1 <= Hight; Counter1++)
    {
        for (Counter2 = 0; Counter2 <= (Hight - Counter1); Counter2++)
        {
                printf("*");
        }
        printf("\n");
    }



    return 0;
}