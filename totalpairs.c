#include<stdio.h>
int main(){
    int x;
    printf("enter x");
    scanf("%d", &x);
   
    int arr[4]={1,2,3,4};
     int pairs=0;
    for(int i=0;i<=3;i++){
        for(int j=i+1;j<=3;j++){
if(arr[i]+arr[j]==x){
printf("%d %d\n",arr[i],arr[j]);
pairs++;
        }}
    }//not a loop itna kuch hogya
    printf("%d",pairs);
    return 0;
}