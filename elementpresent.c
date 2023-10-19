#include<stdio.h>
#include<stdbool.h>
int main(){
    int x;
    printf("enter x");
    scanf("%d", &x);
    int idx=-1;
    int arr[3]={4,4,4};
 bool flag;
    for(int i=0;i<=2;i++){
      
if (arr[i]==x)
{ flag=true;
idx=i;
// break;
}}
  if (flag==false){
            printf("element is not present");
        }
        else {
            printf("element is present at %d",idx);
        }
        return 0;
    }


