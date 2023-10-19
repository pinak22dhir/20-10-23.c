#include<stdio.h>
#include<limits.h>
int main(){
    int arr[4]={8,-8,-5,8};
    int max=INT_MIN;
     int smax=INT_MIN;
     for
    (int i=0;i<=3;i++){
        if(arr[i]>max)
    smax=max;//previous ko soch rha hai
    max=arr[i];
    }
    
    printf("%d",smax);
    return 0;
}
