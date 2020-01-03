
#include <stdio.h>

#include<math.h>

int main()
{
    //Generated number using:
    //https://onlinenumbertools.com/generate-integers
    int my_input[] = {0,1,2,3,4,5};
    
    int n,i;
    int j=0;
    int mod [6][24];
    int nbr_items = sizeof(my_input) / sizeof(my_input[0]);
    for (n = 0; n < nbr_items; n++)
    {
        j=0;
        for (i = 0; i < 24; i++)
        {
            
        mod[n % 6][j%24] = my_input[n] + 6;
        
        printf("my_input =%d, nbr_items modulo 6 = %d, j modulo 24= %d\n", (my_input[n] + 6), (nbr_items % 6), mod);
        j++;
        }
    }

}
