#include<stdio.h>
int main()
{
    int arr[10];
    int n,sum,avr,i;
    printf("enter the no of array elements");
    scanf("%d",&n);
    printf("enter the array elements");
    for( i=0;i<=n-1;i++)
    {
       scanf("%d",&arr[i]);

       sum+=arr[i];}
       printf("sum of the given elemets is %d\n",sum);
       avr=sum/n;
       printf("the average is %d\n",avr);


    return 0;
}
