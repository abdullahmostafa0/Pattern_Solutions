#include <stdio.h>
#include <stdlib.h>

/*
in : 9

out : 

1
12
123
1234
12345
123456
1234567
12345678
123456789


*/


int main ()
{
    unsigned char Hight = 0;
    unsigned char Counter1 = 0;
    unsigned char Counter2 = 0;
    unsigned char Counter3 = 0;
    printf("Enter the hight of the pyramid : \n");
    scanf("%hhu", &Hight);
    for (Counter1 = 1; Counter1 <= Hight; Counter1++)
    {
        for (Counter2 = 1; Counter2 <= Counter1; Counter2++)
        {
            printf("%hhu", Counter2);
        }
        
        printf("\n");
    }





    return 0;
}