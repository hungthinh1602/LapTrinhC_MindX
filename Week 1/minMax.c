#include <stdio.h>

void main()
{
    int a, b, c, max;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    printf("Input c: ");
    scanf("%d", &c);

    printf("Value are:\n a = %d,\n b = %d,\n c = %d",a,b,c); // in ra giá trị của 3 biến a, b, c 
    max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    printf("\nMax is: %d",max);

}