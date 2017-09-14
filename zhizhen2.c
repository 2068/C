#include<stdio.h>
int main()
{
    int q=5;
    int *qprt;
    qprt=&q;
    printf("q:%p\nqprt:%p\n",&q,qprt);
    printf("q:%d\n*qprt:%d\n",q,*qprt);
    printf("&*qprt=%p,*&qprt=%p\n",&*qprt,*&qprt);
    return 0;
}
