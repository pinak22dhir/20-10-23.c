void reverse(int arr[],int p,int q){
for(int i=1,j=2;i<j;i++,j--){
    int temp=arr[i];
    arr[j]=arr[i];
    arr[j]=temp;
}
return;
}