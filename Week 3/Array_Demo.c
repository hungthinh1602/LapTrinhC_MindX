#include <stdio.h>
#define MAX 100

void main(){
    int arr[MAX];
    int lenght;
    int maximum;
    printf("Input number of value: ");
    scanf("%d", &lenght);
    for (int i = 0; i < lenght; i++)
    {
        printf("Value of Arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < lenght; i++)
    {
          printf("\tSo thu %d is: %d \t",i, arr[i]);  
    }
    maximum = arr[0];
    for (int i = 0; i < lenght; i++)
    {
        
        if(arr[i] > maximum){
            maximum = arr[i];
        }
        
    }
        printf("So lon nhat la: %d", maximum);
    

}