#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What is x? ");
    int y = get_int("What is y? ");

    if (x > y)
    {
        printf("x is greater than y.\n");
    }
    if (x < y)
    {
        printf("x is less than y.\n");
    }
    if (x == y)
    {
        printf("x is equal to y.\n");
    }
}
