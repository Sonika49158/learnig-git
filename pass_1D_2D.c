#include<stdio.h>
void print_1D(int arr[],int size);

int main()
{
    int arr[]= {12,23,43,56};
    int size=sizeof(arr)/sizeof(arr[0]);


    printf("1d array");
    print_1D(arr,size);


}
void print_1D(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d\n",arr[i]);
    }

}
