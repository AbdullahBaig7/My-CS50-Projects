#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int years =0;


    // TODO: Prompt for start size
        int startlamas;
        do
        {
             startlamas = get_int("How many starting lamas \n");

        }
        while (startlamas<9);


    // TODO: Prompt for end size
        int endLamas;
        do
        {
             endLamas = get_int("how mant ending lamas? \n");
        }
        while (startlamas>endLamas);

    // TODO: Calculate number of years until we reach threshold
        while (startlamas < endLamas)
            {
                startlamas = startlamas + (startlamas/3)- (startlamas/4);

                years++;
            }


    // TODO: Print number of years
   printf("Years: %i\n" ,years);




}