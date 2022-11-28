#include <stdio.h>

void main()
{
    int choice;

    do
    {
        printf("<-----Menu----->\n");
        printf("1: Hello 1 \n");
        printf("2: Hello 2 \n");
        printf("3: Bye Bye \n");

        printf("Yourchoice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Hello 1\n");
            break;
        case 2:
            printf("Hello 2\n");
            break;
        default:
        printf("Bye Bye");
        // getchar();
            break;
        }

    } while (choice >= 1 && choice < 3);
}