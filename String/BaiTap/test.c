#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100

int main(){
    char str[SIZE];
    printf("Nhap vao chuoi: ");
    // scanf(" %[^\n]", str); 
    gets(str);  
    
    int len;
    len = strlen(str);
    printf("%d\n",len);

    // char tmp;
    for(int l = len -1; l >= 0 ; l--){
        printf("%c",str[l]);
    }
}