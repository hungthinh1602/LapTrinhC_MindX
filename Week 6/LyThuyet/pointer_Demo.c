#include <stdio.h>

void main()
{
    int a = 30;
    int *p; //~p thực ra thì tên của con trỏ chỉ là P nhưng để máy tính nhận diện được đây là con trỏ nên phải có dấu *
    p = &a; // có 2 cách khai báo con trỏ - Đây là cách 1
    int *p1 = &a; //- Đây là cách 2
    printf("\nGia tri cua A la: %d", a);
    printf("\nDia chi cua A la: %x", &a);
    printf("\nDia chi cua *p la: %x", p);
    printf("\nGia tri cua P la: %d", *p);  // lấy giá trị bằng cách trỏ đến con trỏ để lấy giá trị trong địa chỉ vùng nhớ máy tính
    printf("\nDia chi cua *p1 la: %x", p1);
    printf("\nGia tri cua P la: %d", *p1);
    /*Nôm na là *p là con trỏ đang lưu địa chỉ 1 biến số
        - p : lưu địa chỉ
        -*p : lấy giá trị tại vùng địa chỉ đó 
    */ 
}