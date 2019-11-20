#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("length: ");
    if(a<=5 & a>=1)
    {
        for(int i=0; i<a; i++)
        {
        for(int j=0; j<a; j++)
            printf("*");
            printf("\n");
        }
    }
    else 
      { 
        do
         a = get_int("length: ");
        while(a>=5 || a<=1);
         for(int i=0; i<a; i++)
        {
        for(int j=0; j<a; j++)
            printf("*");
            printf("\n");
        }
    }
    
}
