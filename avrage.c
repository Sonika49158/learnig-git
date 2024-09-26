#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int sum,ave,size;
    size=sizeof(arr)/sizeof arr[0];
    printf("the sum of array=\n");
        for(int i=0;i<=8;i++)
    {
        sum+=i;
        printf("%d\n",sum);
    }
    printf("the average is:=\n");
    ave=sum/size;
    printf("%d\n",ave);



    return 0;
}


