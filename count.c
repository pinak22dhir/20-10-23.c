#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int x;
    printf("enter x");
    scanf("%d", &x);
    int count=0;
   for(int i=0;i<=4;i++){
    if (x>arr[i])

    count++;
   }
   printf("%d",count);

}