//appending zeros to the remaining size
#include<stdio.h>
int main()
{
    int arr[5]={1,2};
    arr[0]=20;
    printf("the array values:%d\n");
    for(int i=0; i<=4;i++)
    {
       printf("%d\n",arr[i]);
    }
    return 0;
}
