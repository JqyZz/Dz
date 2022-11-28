#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number = -1;
    int counter = 0;
    do {
        if (counter > 0)
        {
            printf("Необхідно додатнє число. \n");
        }
        number = get_int("Введіть число >= 0: \n");
        counter++;
    }
    while (number < 0);
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    if (sum == 10)
    {
        printf("Так \n");
    }
    else
    {
        printf("Ні \n");
    }
}