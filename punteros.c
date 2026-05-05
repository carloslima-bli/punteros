#include <stdio.h>

int main()
{
    int num=15, a;
    int *x;

    x= &num;
    a=*x;

    printf("%p %d\n",x,a);

    char letra = 'a',c;
    char *ptr;

    ptr= &letra;
    c=*ptr;

    printf("%p %d\n",ptr,c);

    float decimal=3.14,dec;
    float *ptrF;
    ptrF=&decimal;
    dec=*ptrF;

    printf("%p %.2f",ptrF,dec);



   
    return 0;
}