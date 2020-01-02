
#include <stdio.h>

#include<math.h>

int main()
{
    int my_input[] = {0,1,2,3,4,5};
    int n,i;
    int j=0;
    int mod [64][1024];
    int nbr_items = sizeof(my_input) / sizeof(my_input[0]);
    for (n = 0; n < nbr_items; n++)
    {
        j=0;
        for (i = 0; i < 24; i++)
        {
            
        mod[nbr_items % 6][j%24] = my_input[n] + 6;
        
        printf("my_input =%d, nbr_items modulo 64 = %d, j modulo 1024= %d\n", (my_input[n] + 6), (nbr_items % 64), mod);
        j++;
        }
    }

}
