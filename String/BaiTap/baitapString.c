#include <conio.h>
#include <stdio.h>
#include <string.h>  //thư viện chuỗi

int main()
{
    char xau[30];
    printf("Nhap vao 1 chuoi: ");
    gets(xau);
    for(int i=strlen(xau)-1;i>=0;i--)  //strlen trả về độ dài của chuỗi
    {
        printf("%c",xau[i]);
    }
    getch();
}