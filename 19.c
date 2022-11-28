#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number = get_int("Введіть 1 число: \n");
    int num_c = number;
    int number1 = get_int("Введіть 2 число: \n");
    int num1_c = number;
    int steps = 0;

    while (number != 0 && number1 != 0)
    {
        if (number > number1)
        {
            number %= number1;
        }
        else
        {
            number1 %= number;
        }
        steps++;
    }
    if (number == 0)
    {
        printf("НСД: %i\n", number1);
        printf("Кроків: %i\n", steps);
    }
    if (number1 == 0)
    {
        printf("НСД: %i\n", number);
        printf("Кроків: %i\n", steps);
    }
}
/*
a = 64168; 358853; 6365133; 17905514; 549868978;
b = 82678; 691042; 11494962; 23108855; 298294835;
НСД (a, b) = 1234; 1111; 171; 3421; 17;
Кроків = 4; 6; 13; 8; 14;
*/