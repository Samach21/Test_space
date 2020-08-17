#include<stdio.h>
#include<conio.h>

int main()
{
    char input[100];
    int t;

    printf(" Enter number (100 MAX): ");
    for (int i = 0; i < 5; i++)
    {
        scanf_s("%c", &input[i]);
    }
    printf("\n ");
    for (int i = 0; i < 5; i++)
    {
        t = input[i] - 48;
        printf(" %d", t);
    }
    return 0;
}