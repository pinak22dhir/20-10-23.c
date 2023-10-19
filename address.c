///int 4 bytes 1 byte ==8 bits memory allocation
//1char =1 byte
#include<stdio.h>
int main(){
    int arr[4]={1,2,3,4};
    printf("%p\n", &arr[0]);
     printf("%p\n", &arr[1]);
      printf("%p\n", &arr[2]);
      return 0;

}
