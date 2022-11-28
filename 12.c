#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int month = 0;
    int day  = 0;
    int months[] = {1, 3, 5, 7, 8, 10, 12};
    int months1[] = {4, 6, 9, 11};
    int current_day = 0;
    while (month < 1 || month > 12)
    {
        month = get_int("Введіть номер місяця: \n");
    }
    for (int i = 0; i < 7; i++)
    {
        if (month == months[i])
        {
            while (day < 1 || day > 31)
            {
                day = get_int("Введіть день: \n");
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (month == months1[i])
        {
            while (day < 1 || day > 30)
            {
                day = get_int("Введіть день: \n");
            }
        }
    }
    if (month == 2)
    {
        while (day < 1 || day > 28)
        {
            day = get_int("Введіть день: \n");
        }
    }

    for (int i = 1; i < month; i++)
    {
        for (int k = 0; k < 7; k++)
        {
            if (i == months[k])
            {
                current_day += 31;
            }
        }
        for (int k = 0; k < 4; k++)
        {
            if (i == months1[k])
            {
                current_day += 30;
            }
        }
        if (i == 2)
        {
            current_day += 28;
        }
    }
    int result = 365 - (current_day + day);
    printf("До Нового року залишилось %i днів\n", result);
}