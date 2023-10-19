#include<stdio.h>
#include<limits.h>
int main(){
int arr[4]={1,3,8,9};
int max=INT_MIN;
for(int i=0;i<=3;i++){
    if(max<arr[i]){
        max=arr[i];
    }
    
}
printf("%d", max);
return 0;
}