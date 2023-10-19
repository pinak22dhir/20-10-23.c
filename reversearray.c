#include<stdio.h>

int main(){
int arr[4]={1,3,5,7};
int brr[4];
for(int i=0;i<4;i++){
brr[i]=arr[3-i];
}
for(int i=0;i<4;i++){
arr[i]=brr[i];
}
for(int i=0;i<4;i++){
printf("%d", arr[i]);
}
return 0;}