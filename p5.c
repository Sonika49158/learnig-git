//out of bound in for loop(garbage value will generate)
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("the array values:%d\n");
    for(int i=0; i<=10;i++)
    {
       printf("%d\n",arr[i]);
    }
    return 0;
}

