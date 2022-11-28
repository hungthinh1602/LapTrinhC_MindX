#include <stdio.h>>

int tienDienHienTai(int old, int new){
    int hieuSoDien;
    hieuSoDien = new - old;
    return old;
}


int tinhTienDien(int soDienHienTai){
    int thanhTien;
    if (0 < soDienHienTai <= 100 )
    {
        thanhTien = soDienHienTai * 1549;
    }else if (101 <= soDienHienTai <= 150 )
    {
        thanhTien = (soDienHienTai - 100) * 1549;
    }else if (0 < soDienHienTai <= 100 )
    {
        thanhTien = soDienHienTai * 1549;
    }else if (0 < soDienHienTai <= 100 )
    {
        thanhTien = soDienHienTai * 1549;
    }else if (0 < soDienHienTai <= 100 )
    {
        thanhTien = soDienHienTai * 1549;
    }else
    {
        
    }
    
    
}

int main(){
    int old,new,hieu;
    printf("Nhap so dien cu : ");
    scanf("%d", &old); 
    printf("Nhap so dien moi : ");
    scanf("%d", &new);
    hieu = tienDienHienTai(old, new);
    printf("%d", hieu);

}