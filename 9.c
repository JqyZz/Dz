#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int nums[3];
    for (int i = 0; i < 3; i++)
    {
        nums[i] = get_int("Введіть %i число: ", i + 1);
    }
    if (nums[0] < nums[1] && nums[1] < nums[2])
    {
        printf("Так\n");
    }
    else
    {
        printf("Ні\n");
    }
}