#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d", &n);
    int arr[n];
    int sum=0;
    int sum2;
    int diff;
     for (int i = 0; i < 99; i++) {
       sum2=(n*(n+1))/2;
    }
    printf("%d \n",sum2);
   for (int i = 0; i < 99; i++) {
        arr[i] = i + 1;
    }
      for (int i = 0; i < 99; i++) {
        sum += arr[i];
    }

    for(int i=0;i<=98;i++){
  diff=sum2-sum;
   }
printf("%d ",diff);

    return 0;
}