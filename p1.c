
#include<stdio.h>
int main()
{
    int arr[100],n;
    printf("enter the number of array elements:\n");
    scanf("%d",&n);
    printf("enter the array elements are");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the array elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;


}
