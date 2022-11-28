#include <stdio.h>

void swapValue(int *pa, int *pb){
    int temp = *pa; // temp = &a
    *pa = *pb; 
    *pb = temp;

}

void changeA(int *pa){ // pa = &a
    *pa = 500;
}

void main(){
    int a = 30;
    int b = 300;
    // printf("Before Swap: A = %d , B = %d", a,b);
    printf("\nBefore Change: A = %d", a);

    changeA(&a);
    printf("\nAfter Change A = %d",a); // mong muốn A = 500;
    swapValue(&a,&b);
    printf("\nAfter Swap: A = %d , B = %d", a,b);

}