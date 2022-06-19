#include <stdio.h>

int main()
{
    /* code */
    int n;
    do
    {
        /* code */
        printf("enter number: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 2 !=0)
        {
            /* code */
            break;
        }
        
    } while (1);

    printf("Thank you");

    return 0;
}