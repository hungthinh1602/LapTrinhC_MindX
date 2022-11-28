#include <stdio.h>

void main(){
    int number;
    int n1,n2,n3,n4, soNut;

    scanf("%d",&number);
    n1 = number % 10;
    number = number / 10;
    n2 = number % 10;
    number = number / 10;
    n3 = number % 10;
    number = number / 10;
    n4 = number % 10;
    number = number / 10;
    soNut = n1 + n2 + n3 + n4;
    soNut = soNut % 10;
    printf("so nut la: %d",soNut);


}