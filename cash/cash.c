#include <stdio.h>
#include <cs50.h>


int main (void)

{
    int cents;
    do
    {
        cents = get_int("Change owed in cents:\n");
    }
    while (cents<=0);

     int tweentyfive = cents/25;
    cents = cents - (tweentyfive*25);
    int ten = cents/10;
    cents = cents - (ten*10);
    int five = cents/5;
    cents = cents - (five*5);
    int one = cents/1;


    int ans = tweentyfive+ ten+ five + one;




    printf("Answer is: %i \n", ans);

}
