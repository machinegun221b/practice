#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int j;
    int h = get_int("Height: ");
    if(h<=8 & h>=1)
    {
       for(int i=0; i<=h; i++)
       {
           for(int n=0; n<(h-i);n++)
               printf(" ");
           for(j=0; j<i; j++)
               printf("#");
               printf(" ");
           for(j=0; j<i;j++)
            printf("#");
        printf("\n");
        
       }
    }
    else
    {
        do
            h = get_int("Invalid.\nHeight: ");
        while(h>8 || h<1);
       for(int i=0; i<=h; i++)
       {
           for(int n=0; n<(h-i);n++)
               printf(" ");
           for(j=0; j<i; j++)
               printf("#");
               printf(" ");
           for(j=0; j<i;j++)
            printf("#");
        printf("\n");
        
       }
    }
}
