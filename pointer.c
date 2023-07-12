#include<stdio.h>
int main()
{
    int a=50,*p,**q;
    p=&a;
    q=&p;

    printf("value A is: %d\n",a);
    printf("address of A is: %u\n",&a);
    printf("address of A using p is: %d\n",p); 
    printf("address of p is: %u\n",p);
    printf("value of A using p is: %d\n",*p);
    printf("value of A using q is: %d\n",**q);

    return 0;
}