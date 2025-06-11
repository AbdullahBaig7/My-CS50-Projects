#include <stdio.h>
#include <cs50.h>

int main()
{

    int age, phoneNumber;
    string name;

    name = get_string("What is your name? ");
    age = get_int("What is your age? ");
    phoneNumber = get_int("What is your phone number? ");

    printf("Your name is %s and your age is %d and your phoneNumber is %d \n" , name, age, phoneNumber );
}