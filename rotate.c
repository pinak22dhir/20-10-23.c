#include<stdio.h>
void reverse(int arr[],int p,int q){
for(int i=p,j=q;i<j;i++,j--){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
return;
}
int main(){
    int arr[4]={1,3,5,7};
    // int k;
    // printf("enter k");
    // scanf("%d", &k);
 
    int k=50;
    // 
    int n=4;
    k=k-n;
// k=k%n;


reverse(arr,0,n-1);
reverse(arr,0,k-1);
reverse(arr,k,n-1);
for(int i=0;i<=3;i++){
printf("%d", arr[i]);
}
return 0;}