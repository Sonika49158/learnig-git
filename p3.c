//read array from index values
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int num,index_no;
    printf("enter the value of index");
    scanf("%d",&index_no);
    num=arr[index_no];// i is index value
    printf("%d",num);
    return 0;
}
