#include<stdio.h>
#include<limits.h>
int main(){
    int arr[4]={1,3,5,5};
    int max=INT_MIN;
     int smax=INT_MIN;
     for
    (int i=0;i<=3;i++){
        if(arr[i]>max)
      max=arr[i];
    }
    for(int i=0;i<=3;i++){
        if(arr[i]>smax && arr[i]!=max)
        smax=arr[i];
    }
    printf("%d",smax);
    return 0;
}
