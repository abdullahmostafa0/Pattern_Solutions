#include <stdio.h>
#include <stdlib.h>

/*

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
    scanf("%hhu", &Hight);
    for (Counter1 = 1; Counter1 <= Hight; Counter1++)
    {
        for (Counter2 = 1; Counter2 <= (Counter1 + Counter3); Counter2++)
        {
            if (Counter2 > Counter1)
            {
                
                Counter4 += 2;
                if((Counter2 - Counter4) == 0)
                {
                    printf(" ");
                }
                else 
                {
                    printf("%hhu", (Counter2 - Counter4));
                }

            }
            else 
            {
                printf("%hhu", Counter2);
            }    
        }


        Counter4 = 0;
        Counter3++;
        printf("\n");
    }



    return 0;
}
