#include <stdio.h>

int sum2value(int *pa, int *pb){ // *a ở đây lưu địa chỉ của tham số a truyền vào, b tương tự
    int sum;                  // pa = &a, pb = &b
    sum = *pa + *pb; // 
    return sum;
}

void main(){
    int a, b, sum;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d",&b);
    sum = sum2value(&a,&b);
    printf("Sum a + b = %d", sum);

}