#include <stdio.h>
#include <stdlib.h>


/*

6
      1
     1 2
    1   3
   1     4
  1       5
 1 2 3 4 5 6 

*/
int main ()
{
    unsigned char Hight = 0;
    unsigned char Counter1 = 0;
    unsigned char Counter2 = 0;
    unsigned char Counter3 = 0;
    unsigned char Counter4 = 0;
    unsigned char Counter5 = 0;
    unsigned char Counter6 = 0;
    scanf("%hhu", &Hight);
    for (Counter1 = 1; Counter1 <= Hight; Counter1++)
    {
        for (Counter3 = Counter1; Counter3 <= Hight; Counter3++)
        {
            printf(" ");
        }
        for (Counter4 = 1; Counter4 <= (Counter1 + Counter5); Counter4++)
        {
            if (Counter1 == 1)
            {
                printf("%hhu", Counter1);
            }
            else if (Counter1 == Hight)
            {
                if (Counter4 <= Counter1)
                {
                    printf("%hhu ", (Counter4));
                }
            }
            else 
            {
                if(Counter4 == 1)
                {
                    printf("%hhu", Counter4);
                }
                else if (Counter4 == (Counter1 + Counter5))
                {
                    printf("%hhu", Counter1);
                }
                else
                {
                    printf(" ");
                } 
            }
            
        }
        Counter5++;
        printf("\n");
    }



    return 0;
}