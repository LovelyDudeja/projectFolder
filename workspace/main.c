#include<stdio.h>
void  display(int arr[],int n)
{   //Traversal
    for(int i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
}
void  indInsertion(int arr[],int size,int element,int capacity,int index)
{
    if(size>=capacity)
    {
        printf("Sorry,We have no space");
    }
    else{
        for(int i=size-1;i>=index;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=element;
    }
}
int main()
{
    int arr[100]={11,22,33,44,55};
    int size=5,capacity=100,element=66,index=3;
    printf("before Insertion\n");
    display(arr,size);
    indInsertion(arr,size,element,capacity,index);
    size+=1;
    printf("\n");
    printf("after insertion\n");
    display(arr,size);
    return 0;
}