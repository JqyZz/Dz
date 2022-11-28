#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int biggest = 0;
    int nums[5];
    for (int i = 0; i < 3; i++)
    {
        nums[i] = get_int("Введіть %i число: ", i + 1);
        if (nums[i] > biggest)
        {
            biggest = nums[i];
        }
    }
    printf("Найбільше число: %i\n", biggest);
}