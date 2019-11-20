#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h = get_int("Height of the triangle: ");
    if(h>=1 & h<=10)
    {
        for(int i=1; i<=h; i++)
        {
            for(int j=0; j<i; j++)
                printf("*");
            printf("\n");
        }
    }
    else 
    {
        do
            h = get_int("Height: ");
        while(h<0 || h>10);
        for(int i=1; i<=h; i++)
        {
            for(int j=0; j<i; j++)
                printf("*");
            printf("\n");
        }
    }
}
