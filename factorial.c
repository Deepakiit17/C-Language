#include<stdio.h>

int main()
{
    /* code */
    int n;
    printf("enter number: ");
    scanf("%d", &n);

    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact = fact * i;
    }

    printf("final factorial is %d", fact);

    return 0;
}