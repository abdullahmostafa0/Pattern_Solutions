#include <stdio.h>
#include <stdlib.h>

/*

9

1
12
1 3
1  4
1   5
1    6
1     7
1      8
123456789


*/

int main ()
{
    unsigned char Hight = 0;
    unsigned char Counter1= 0;
    unsigned char Counter2 = 0;
    unsigned char Counter3 = 0;
    scanf("%hhu", &Hight);
    for (Counter1 = 1; Counter1 <= Hight; Counter1++)
    {
        for (Counter2 = 1; Counter2 <= Counter1; Counter2++)
        {
            if (Counter1 == 1)
            {
                printf("%hhu", Counter1);
            }
            else if (Counter1 == Hight)
            {
                printf("%hhu", Counter2);
            }
            else
            {
                if(Counter2 == 1)
                {
                    printf("%hhu", Counter2);
                }else if(Counter2 == Counter1)
                {
                    printf("%hhu", Counter2);
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