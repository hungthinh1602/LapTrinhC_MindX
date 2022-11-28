#include <stdio.h>

void main(){
//     int check ;
//     int tich, sum;
// int n;

//   printf("Input n: ");
//             scanf("%d", &n);
//             for (int i = 1; i <= 10; ++i)
//             {

//                 printf("%c %d x %2d = %2d", 179, n, i, i * n);

//                 printf("%c\n", 179);
//                 tich = i*n;
//                 sum += tich;
//             }
//             printf("%d \n", sum);

//    int i, j, rows;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = rows; i >= 1; --i) {
//       for (j = 1; j <= i; ++j) {
//          printf("%d ", j);
//       }
//       printf("\n");
//    }
//    return 0;
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (j = i; j >= 1; --j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;

    
}