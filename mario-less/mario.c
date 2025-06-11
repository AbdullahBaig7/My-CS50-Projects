#import <stdio.h>
#import <cs50.h>

int main(void)

{

int height = get_int("How high would you like the pyramid?\n");
while (height <1 || height >8)
{
    height = get_int("Sorry incorrect value, Please try again.\nHow high would you like the pyramid?\n");
}
    if (height >= 1 && height <= 8)
    {
        for (int i = 0; i < height; i++)
        {
            // Print leading spaces
            for (int j = 0; j < height - i - 1; j++)
            {
                printf(" ");
            }

            // Print hashes
            for (int x = 0; x <= i; x++)
            {
                printf("#");
            }

        printf("\n");

        }
    }
}
