#include<stdio.h>
void reverse(int arr[]){
for(int i=0,j=3;i<j;i++,j--){
    int temp=arr[i];
    arr[j]=arr[i];
    arr[j]=temp;
}
return;
}
int main(){
int arr[4]={1,3,5,7};
reverse(arr);
for(int i=0;i<=3;i++){
printf("%d", arr[i]);
}
return 0;}