#include<stdio.h>
int main(){
    int arr[3]={4,4,4};
    for(int i=0;i<=2;i++){
        for(int j=i+1;j<=2;j++){
if (arr[i]!=arr[j])
{ printf("element %d is unique  at %d ",arr[i],i);
break;}
        }
    }
    return 0;
}

