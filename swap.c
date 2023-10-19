#include<stdio.h>
void fun(int a[])
{int temp;
temp=a[0];
a[0]=a[1];
a[1]=temp;

return;}
int main(){
    int a[2]={1,2};
    printf("%d %d\n",a[0],a[1]);
    fun(a);
    printf("%d %d\n",a[0],a[1]);
    return 0;
}
//it stores address of fordt element swap is easierv
