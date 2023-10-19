#include<stdio.h>
int main(){
    int arr[3]={1,5,7};
    int sumeven=0;
    int sumodd=0;
    for(int i=0;i<=2;i++){
        if(i%2==0)
        sumeven+=arr[i];
        else
          sumodd+=arr[i];
    }
    printf("%d",sumeven-sumodd);
    return 0;
} 