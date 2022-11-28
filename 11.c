#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int years[] = {1, 21, 31, 41, 51, 61, 71, 81, 91, 101, 121, 131, 141};
    int years1[] = {2, 3, 4, 22, 23, 24, 32, 33, 34, 42, 44, 44, 52, 53, 54, 62, 63, 64, 72, 73, 74, 82, 83, 84, 92, 93, 94, 102, 103, 104, 122, 123, 124, 132, 133, 134, 142, 143, 144};
    int age = get_int("Введіть вік: \n");
    for (int i = 0; i < 13; i++)
    {
        if (age == years[i])
        {
            printf("Вам %i рік\n", age);
            return 0;
        }
    }
    for (int i = 0; i < 39; i++)
    {
        if (age == years1[i])
        {
            printf("Вам %i роки\n", age);
            return 0;
        }
    }
    if (age > 1 && age <= 150)
    {
        printf("Вам %i років\n", age);
        return 0;
    }
}