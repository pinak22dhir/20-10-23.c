#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for (int i=0;i<=4;i++){
        if(arr[i]<32)
        printf(" index is %d",i);
       
    }
    return 0;
}