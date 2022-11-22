#include<stdio.h>
int count(int *arr)
{
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]>=0)
        {
            count++;
        }
    }
    printf("No. of positive integer in the array is %d\n",count);
}
int main()
{
    int arr[10]={-1,2,-6,-9,8,-5,-7,5,9,4};
    count(&arr);
}