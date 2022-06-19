#include<stdio.h>

int main()
{
    /* code */
    int n;
    printf("enter number: ");
    scanf("%d", &n);

    for(int i=1; i<=10; i++) {
        printf("%d\n", n*i);
    }
    return 0;
}
