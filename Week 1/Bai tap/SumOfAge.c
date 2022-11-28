#include<stdio.h>
#include <conio.h>
#include<conio.h>

int main()
{
    for(int i = 1; i <= 10; ++i)
    {
        for(int j = 2; j <= 9; ++j)
        {
            printf("%c %d x %2d = %2d", 179, j, i, i * j);
        }
        printf("%c\n", 179);
    }

    getch();
    return 0;

    // clrscr();
// int a=1000;
// printf("a = %d\n",a);
// printf("a = %1d\n",a);
// printf("a = %2d\n",a);
// printf("a = %3d\n",a);
// printf("a = %4d\n",a);
// printf("a = %5d\n",a);
// printf("a = %6d\n",a);
// printf("a = %7d\n",a);
// printf("a = %8d\n",a);
// getch();
}