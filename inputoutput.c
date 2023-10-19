#include<stdio.h>
int main(){
    int arr[4];
    for(int i=0;i<=3;i++){
        int a=i+1;
        printf("enter element %d",a);

        scanf("%d", &arr[i]);
        

    }
    for(int i=0;i<=3;i++){
      printf("%d ", arr[i]);}
}