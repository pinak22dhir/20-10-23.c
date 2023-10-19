#include<stdio.h>
void fun(int a[])
{a[0]=7;
return;}
int main(){
    int a[4]={1,2,3,4};
    printf("%d\n",a[0]);
    fun(a);
    printf("%d\n",a[0]);
    return 0;
}
//it stores address of fordt element swap is easierv
