#include<stdio.h>
int main(){
    int arr[3]={4,4,8};
    for(int i=0;i<=2;i++){
        for(int j=i+1;j<=2;j++){
if (arr[i]==arr[j])
{ printf("i and j are duplicate  %d at %d %d",arr[i],i,j);}
// break;
        }
    }
    return 0;
}