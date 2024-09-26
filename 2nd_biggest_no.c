//WAP to find the second biggest element of 1D array
#include<stdio.h>
int biggest_no_is(int arr[], int size);
int main()
{
    int arr[]={20,30,80,70,50,16};
    int size=sizeof(arr)/sizeof(arr[0]);

    int res=biggest_no_is(arr,size);
    printf("the second biggest number is %d",res);
}
int biggest_no_is(int arr[], int size)
{
    int max=arr[0];
    int second_max=arr[0];
    for(int i=1; i<size;i++)
    {
        if(arr[i]>max)
        {
            second_max=max;
            max=arr[i];
             }
            else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }
    if(second_max==arr[0]-1){
        printf("no second largest eleme");
        return -1;
    }

    return second_max;
}

