#include <stdio.h>
#include <stdlib.h>

int main ()
{
    unsigned char Hight = 0;
    unsigned char Counter1 = 0;
    unsigned char Counter2 = 0;
    unsigned char Counter3 = 0;
    scanf("%hhu", &Hight);
    for (Counter1 = 1; Counter1 <= Hight; Counter1++)
    {
        for (Counter2 = Counter1; Counter2 <= Hight; Counter2++)
        {
            printf("%hhu", (Counter2)-Counter3);
        }
        Counter3++;
        printf("\n");
    }


    return 0;
}