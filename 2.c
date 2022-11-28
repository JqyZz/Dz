#include <stdio.h>

int main(void)
{   
    // Верх
    for (int i = 1; i <= 4; i++)
    {
        // Ліва сторона
        for (int j = 4 - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = i; k > 0; k--)
        {
            printf("Ж");
        }
        // Right side of the roof
        for (int k = i - 1; k > 0; k--)
        {
            printf("Ж");
        }
        printf("\n");
    }
    // Низ
    for (int i = 2; i > 0; i--)
    {
        printf(" НН");
    }
    printf("\n");
    printf(" TTTTT\n");
}