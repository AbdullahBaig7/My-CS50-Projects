#include <stdio.h>
#include <cs50.h>


int main (void)
{
   float startlamas = get_int("How many starting lamas \n");
   float endLamas = get_int("how mant ending lamas? \n");

   int years =0;

    while (startlamas <= endLamas)
    {
         startlamas = startlamas + startlamas/12;

         years++;
    }
    years--;

   printf("it will take %d years \n" ,years);
}