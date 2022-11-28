#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int number1 = get_int("Введіть 1 натуральне число: \n");
    int number2 = get_int("Введіть 2 натуральне число: \n");
    int sum = 0;

    for (int i = number1; i <= number2; i++)
    {
        sum += pow(i, 2);
    }
    printf("Сума квадратів: %i\n", sum);
}