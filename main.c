#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a;
    printf("Enter a value to Square it : ");
    scanf("%d",&a);

    printf("\n%d's Square is = %d", a, square(a));

    getch();
    return 0;
}

int square(int n)
{
    return n*n;
}
