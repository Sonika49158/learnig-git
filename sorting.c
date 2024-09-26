#include<stdio.h>
void arr_sorting(int arr[],int size);
int main()
{
    int size;
    printf("enter the number of size\n");
    scanf("%d",&size);
    int arr[size];

    printf("enter the array element\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr_sorting(arr,size);
    printf("the sorted elements are\n");
    for(int j=0;j<size;j++)
    {
        printf("%d",arr[j]);
}
}
void arr_sorting(int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
        {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
}
}
