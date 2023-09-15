#include <stdio.h>
#include <stdlib.h>


/*
6

A
ABA        
ABCBA      
ABCDCBA    
ABCDEDCBA  
ABCDEFEDCBA

*/


int main ()
{
    unsigned char Hight = 0;
    unsigned char Counter1= 0;
    unsigned char Counter2 = 0;
    unsigned char Counter3 = 0;
    unsigned char Counter4 = 0;
    scanf("%hhu", &Hight);
    
    for (Counter1 = 1; Counter1 <= Hight; Counter1++)
    {
        for (Counter2 = 1; Counter2 <= (Counter1 + Counter3); Counter2++)
        {

                if (Counter2 > Counter1)
                {
                    if (Counter2 - Counter4 == 0)
                    {
                        printf(" ");
                    }
                    else
                    {
                    Counter4 += 2;
                    printf("%c", ((Counter2 + 64) - Counter4));
                    }
                }
                else 
                {
                    printf("%c", (Counter2 + 64));
                }
        }
        Counter4 = 0;
        printf("\n");
        Counter3++;
    }
    return 0;    
}
    

    
