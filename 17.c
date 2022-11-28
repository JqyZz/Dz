#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number = get_int("Введіть 1 число: \n");
    int num_c = number;
    int number1 = get_int("Введіть 2 число: \n");
    int num1_c = number1;

    while (number != number1)
    {
        if (number > number1)
        {
            number -= number1;
        }
        else
        {
            number1 -= number;
        }
    }
    printf("НСД: %i\n", number);
}