#include <stdio.h>

int main()
{
    int num=15, a;
    int *x;

    x= &num;
    a=*x;

    printf("%p %d",x,a);
    

   
    return 0;
}