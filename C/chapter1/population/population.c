#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    do
    {
        start_size = get_int("Start Size: ");
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("End Size: ");
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    int years, birth, death;
    years = 0;
    while (start_size < end_size)
    {
        birth = start_size / 3;
        death = start_size / 4;
        start_size = start_size + birth - death;
        years++;
    }

    // TODO: Print the number of years
    printf("Years: %i\n", years);
}
