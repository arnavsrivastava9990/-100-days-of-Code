#include <stdio.h>

int main()
{
    int a, b, temp,mult, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    mult=a*b;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    lcm=mult/a;
    printf("LCM = %d\n", lcm);

    return 0;
}