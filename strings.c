#include <stdio.h>

void printString(char arr[]);

int main()
{
    /* code */
    char firstName[] = "Deepak";
    char lastName[] = "Meena";

    printString(firstName);
    printString(lastName);
    return 0;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}