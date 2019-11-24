#include<cs50.h>
#include<stdio.h>

int main(void)
{
  int j;
  int n = get_int("Height: ");
  if(n<=8 & n>=1)
    {
      for (int i = 0; i < n; i++)
      {
        for(int x=0;x<=(n-j);x++)
        {
          printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
          printf("#");
        }
          printf(" ");
         for (j = 0; j <= i; j++)
        {
          printf("#");
         }
          printf("\n");
      }
    }
    else
    printf("%i\n",n);
}
