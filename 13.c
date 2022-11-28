#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int number = get_int("Введіть натуральне число: \n");
    int square = 0;
    int cube = 0;
    for (int i = 1; i <= number; i++)
    {
        square = pow(i, 2);
        cube = pow(i, 3);
        printf("%i: %i %i\n", i, square, cube);
    }
}