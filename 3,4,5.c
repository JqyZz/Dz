#include <stdio.h>
#include <cs50.h>

int main(void)
{
	float first, second, third, sum, multiply, average;
    first = get_int("Введіть перше число: ");
    second = get_int("Введіть друге число: ");
    third = get_int("Введіть третє число: ");
    sum = first + second + third;
    multiply = first * second * third;
    average = sum / 3;
    printf("%0.f+%0.f+%0.f=%0.f\n", first, second, third, sum);
    printf("%0.f*%0.f*%0.f=%0.f\n", first, second, third, multiply);
    printf("(%0.f+%0.f+%0.f)/3=%0.2f\n", first, second, third, average);
}