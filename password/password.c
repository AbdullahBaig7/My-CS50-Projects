// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int length = strlen(password);
    int total = 0;
    bool hasUpper = false;
    bool hasLower = false;
    bool hasdiget = false;
    bool hasSymbol = false;

    for (int i = 0;  i<length; i++)
    {
        char charValue = password[i];

        if (isupper(charValue))
        {
            hasUpper = isupper(charValue);
        }
        else if (islower(charValue))
        {
            hasLower = islower(charValue);
        }
        else if(isdigit(charValue))
        {
            hasdiget = isdigit(charValue);
        }
        else
        {
            hasSymbol = true;
        }

    }
    return (hasUpper&&hasLower&&hasdiget&&hasSymbol);



}