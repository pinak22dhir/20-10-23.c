#include<stdio.h>
int main(){
    int arr[4]={1,3,6,8};
    for(int i=0;i<4;i++){
        if(i%2!=0){
        arr[i]+=10;}
        else{ 
        arr[i]*=2;}}
    
     for(int i=0;i<4;i++){
      printf("%d ", arr[i]);
    }
    return 0;
}