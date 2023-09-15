#include <stdio.h>
#include <stdlib.h>


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
        for (Counter2 = Counter1; Counter2 <= Hight; Counter2++)
        {
            if (Counter1 == 1)
            {
                printf("%hhu", Counter2);
            }
            else if (Counter1 == Hight)
            {
                printf("%hhu", Counter1);
            }
            else 
            {
                if (Counter2 == Counter1)
                {
                    printf("%hhu", Counter1);
                }
                else if (Counter2 == Hight)
                {
                    printf("%hhu", Counter2);
                }
                else 
                {
                    printf(" ");
                }
            }
        
        }
        printf("\n");
    }
    return 0;
}