#include <cs50.h>

#include <stdio.h>

int main(void)

{

    // declare a string animal and get user input

    string animal = get_string("Enter a type of animal: ");

    // declare a celestial body and get input

    string body = get_string("Enter a celestial body: ");

    // declare a number and get input

    float number = get_float("Enter a number with a decimal: ");

    // write your printf statement here
    printf("\n");
    printf("The %s jumped over the %s, %.1f times!\n", animal, body, number);
}
