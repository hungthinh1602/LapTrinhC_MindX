#include <conio.h>
#include <stdio.h>
#include <string.h>

char doc_so[50];
char *docso(int n)
{
   char doc[10][5]={"","Mot","Hai","Ba","Bon","Nam","Sau","Bay","Tam","Chin"};
   doc_so[0]=0;
   int donvi=n%10;
   n=n/10;
   int chuc=n%10;
   int tram=n/10;
   if(tram>0)
   {
      strcat(doc_so,doc[tram]);
      strcat(doc_so," Tram ");
   }
   if(chuc>0)
   {
      if(chuc==1)
      strcat(doc_so," Muoi ");
      else
      {
         strcat(doc_so,doc[chuc]);
         strcat(doc_so," Muoi ");
      }
   }
   if(donvi>0)
   strcat(doc_so,doc[donvi]);
   return doc_so;
}
int main()
{
   int n;
    printf("Nhap vao mot day so: ");
    scanf("%d",&n);
    if(n==0)
    {
      printf("Khong");
   }
   else
   {
      int tram=n%1000;
      n=n/1000;
      int ngan=n%1000;
      n=n/1000;
      int trieu=n%1000;
      int ty=n/1000;
      if(ty>0)
      {
         printf("%s Ty",docso(ty));
      }
      if(trieu>0)
      {
         printf(" %s Trieu ",docso(trieu));
      }
      if(ngan>0)
      {
         printf(" %s Ngan ",docso(ngan));
      }
      if(tram>0)
      {
         printf(" %s ",docso(tram));
      }
   }
   getch();
}



/*
#include<stdio.h>
int main()
{
  //khai báo biến n và yêu cầu người dùng nhập vào từ bàn phím
  int n;
  printf("\nNhập vào số n: ");
  scanf("%d", &n);
  //a là đơn vị
  int a = n % 10;
  //b là chục
  int b = (n / 10) % 10;
  //c là hàng trăm
  int c = n / 100;
  //điều kiện số có hai chữ số
  if(n<100 || n > 999){
    printf("Nhập vào số có hai chữ số!! ");
  }
  else{
    //in ra hàng trăm
    switch(c){
      case 1: printf("Một trăm ");break;
      case 2: printf("Hai trăm ");break;
      case 3: printf("Ba trăm ");break;
      case 4: printf("Bốn trăm ");break;
      case 5: printf("Năm trăm ");break;
      case 6: printf("Sáu trăm ");break;
      case 7: printf("Bảy trăm ");break;
      case 8: printf("Tám trăm ");break;
      case 9: printf("Chín trăm ");break;
    }
    // in ra chử "lẻ" nếu hàng chục bằng không
    if(b % 10 == 0 && a != 0){
      printf("lẻ ");
    }
    //in ra hàng chục
    switch(b){
      case 1: printf("mười ");break;
      case 2: printf("hai mươi ");break;
      case 3: printf("ba mươi ");break;
      case 4: printf("bốn mươi ");break;
      case 5: printf("năm mươi ");break;
      case 6: printf("sáu mươi ");break;
      case 7: printf("bảy mươi ");break;
      case 8: printf("tám mươi ");break;
      case 9: printf("chín mươi ");break;
    }
    //in ra hàn đơn vị
    switch(a){
      case 1: printf("một ");break;
      case 2: printf("hai ");break;
      case 3: printf("ba ");break;
      case 4: printf("bốn ");break;
      case 5: printf("lăm ");break;
      case 6: printf("sáu ");break;
      case 7: printf("bảy ");break;
      case 8: printf("tám ");break;
      case 9: printf("chín ");break;
    }
  }
 
  printf("\n------------------------------------\n");
  printf("Chương trình này được đăng tại Freetuts.net");
}
*/