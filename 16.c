#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

int main(void)
{
    char *number = get_string("Введіть ціле число: ");
    for (int i = 0; i < strlen(number); i++)
    {
        if (number[i] == number[i + 1])
        {
            printf("Так.\n");
            return 0;
        }
    }
    printf("Ні.\n");
    return 0;
}