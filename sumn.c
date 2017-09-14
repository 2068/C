#include<stdio.h>
long factorial(int n);
int main()
{
    int num;
    for(num=0;num<10;num++)
    {
        printf("%d!=%ld\n",num,factorial(num));
    }
    return 0;
}
long factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
