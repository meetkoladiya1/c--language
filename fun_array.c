#include<stdio.h>

 void showArray(int a[10])
{
    for(int i=0;i<10;i++)
    {
        printf("A [%d] is :%d\n",i,a[i]);
    }
}

int main()
{
    int arr[10];
    for(int i=0;i<=10;i++)
    {
        printf("Enter A[%d] value:",i);
        scanf("%d",&arr[i]);
    }

    showArray(arr);
}