#include<stdio.h>
int main()
{
    int a[50]={1,2,3,4,5};
    int i,*p;
    p=&a;
    printf("value of p is:%d\n\n",p);
    for(i=0;i<5;i++)
    {
        printf("%d\t%d\n",*(p+i),(p+i));
    }
}