#include <stdio.h>

/*
    Tạo 1 Menu voi option sau:
    1- Tinh tong bang cuu chuong n
    2- In ra cac so le be hon m
    3- giai phuong trinh bac 2
    4- Exit
*/

void main()
{
    int choice;
    int n, m;
    int sum,tich;
    do
    {
        printf("<-----Menu----->\n");
        printf("C1: Tinh tong bang cuu chuong n \n");
        printf("C2: In ra cac so le be hon m \n");
        printf("C3: Giai phuong trinh bac 2 \n");
        printf("C4: Exit \n");

        printf("Yourchoice: ");
        scanf("%s", &choice);
        printf("%s", choice);

        switch (choice)
        {
        case 1:
            printf("Input n: ");
            scanf("%d", &n);
            for (int i = 1; i <= 10; ++i)
            {

                printf("%c %d x %2d = %2d", 179, n, i, i * n);

                printf("%c\n", 179);
                tich = i*n;
                sum += tich;
            }
            printf("%d \n", sum);
            break;
        case 2:
            printf("");
            break;
        case 3:
            break;
        default:
            printf("Bye Bye");
            // getchar();
            break;
        }
    }while(choice <3);

}