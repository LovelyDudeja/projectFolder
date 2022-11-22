
#include<stdio.h>
void reverse(int *arr){
    int temp;
    for(int i=0;i<3;i++)
    {
        arr[i],arr[7-i-1];
        int temp=arr[i];
        arr[i]=arr[7-i-1];
        arr[7-i-1]=temp;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    reverse(&arr);//
    for(int i=0;i<7;i++){
    printf("The value of %d element is :%d\n",i,arr[i]);
    }
    return 0;
}