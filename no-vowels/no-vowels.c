// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace (string text)
{

        int lenght = strlen(text);

        for (int i =0; i<lenght; i++)
        {
            char charVal = text[i];
            switch (charVal)
            {
                case 'a':
                text[i] = '6';
                break;

                case 'e':
                text[i] = '3';
                break;

                case 'i':
                text[i] = '1';
                break;

                case 'o':
                text[i] = '0';
                break;
            }

        }
       return text;
}

int main(int argc, string argv[])
{

 if (argc == 2)
    {
        printf("Replaced string: %s\n", replace(argv[1]));

    }


    else if (argc == 1)
    {
        printf("enter one more argument \n");
        return 1;
    }
    else
    {
        printf ("enter less arguments or inncorrect arguments \n");
        return 1;
    }

}