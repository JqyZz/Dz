#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number = get_int("Введіть натуральне число: \n");
    printf("Відповідь: ");
    while (number > 0)
    {
        printf("%i ", number);
        number -= 2;
    }
    printf("\n");
}