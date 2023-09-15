#include <stdio.h>
#include <stdlib.h>

/*
in : 6

out :
      1
     222
    32343
   4234564
  523456785
 623456789106


*/

int main ()
{
    unsigned char Hight;
    unsigned char Counter1 = 0;
    unsigned char Counter2 = 0;
    unsigned char Counter3 = 0;
    unsigned char Counter4 = 0;
    unsigned char Counter5 = 1;
    scanf("%hhu", &Hight);
    for (Counter1 = 1; Counter1 <= Hight; Counter1++)
    {   
        for (Counter2 = Counter1; Counter2 <= Hight; Counter2++)
        {
            printf(" ");
        }
        for (Counter3 =  1; Counter3 <= (Counter1 + Counter4); Counter3++)
        {   if(Counter3 == 1)
            {
                printf("%hhu", Counter5);
            }
            else if (Counter3 == (Counter1 + Counter4))
            {
                printf("%hhu", Counter5);
            }else 
            {
                printf("%hhu", Counter3);
            }
            
        }
        Counter5++;
        Counter4++;
        printf("\n");
    }


    return 0;
}